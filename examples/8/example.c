#include <stdio.h>

void win(void) {
    printf("win!\n");
}

int main(void) {
    char buffer[16];

    // Use gets for format string attack to print stack elements using %n$p
    gets(buffer);

    printf(buffer);
    printf("\n");

    // Use gets to overwrite canary and return address
    gets(buffer);
}

