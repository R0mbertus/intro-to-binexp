#include <stdio.h>

void win(void) {
    puts("win!\n");
}

void vuln(void) {
    char buffer[16];

    // Use gets to leak stack elements through format string attack
    gets(buffer);
    
    printf(buffer);
    printf("\n");

    // Use gets to overwrite return address to win now that we now base address
    gets(buffer);
}

int main(void) {
    vuln();
}

