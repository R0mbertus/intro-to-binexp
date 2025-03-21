#include <stdio.h>

void gadgets(void) {
    // Function that explicitly makes some gadgets
    __asm__ (
        "pop    %rdi\n\t"
        "ret\n\t"
        "pop    %rsi\n\t"
        "ret\n\t"
        "pop    %rdx\n\t"
        "ret\n\t"
        "pop    %rax\n\t"
        "ret\n\t"
        "syscall"
    );
}

int main(void) {
    char buffer[16];
    printf("%lX\n", &buffer);
    gets(buffer);
}