#include <stdio.h>

void gadgets(void) {
    // Function that explicitly makes the pop rdi and pop rsi gadgets
    __asm__ (
        "pop %rdi\n\t"
        "ret\n\t"
        "pop %rsi\n\t"
        "ret"
    );
}

void vuln(void) {
    char buffer[16];

    gets(buffer);
    
    printf(buffer);
    printf("\n");

    gets(buffer);
}

int main(void) {
    puts("main");
    vuln();
}