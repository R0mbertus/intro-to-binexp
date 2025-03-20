#include <stdio.h>

void win(int a, int b) { 
    if (a == 0xDEADBEEF && b == 42)
        printf("win!\n");
}

void gadgets(void) {
    // Function that explicitly makes the pop rdi and pop rsi gadgets
    __asm__ (
        "pop %rdi\n\t"
        "ret\n\t"
        "pop %rsi\n\t"
        "ret"
    );
}

int main(void) {
    char local[8];

    // Use gets to overwrite the return address to ROP chain to win
    gets(local);
}