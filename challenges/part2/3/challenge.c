#include <stdio.h>

void gadgets(void) {
    // Function that explicitly makes the pop rdi and pop rsi gadgets
    __asm__ (
        "push    rdi\n\t"
        "ret\n\t"
        "shr     rbx, 0x8\n\t"
        "ret\n\t"
        "push    rbx\n\t"
        "ret\n\t"
        "mov     rdi, rsp\n\t"
        "push    rax\n\t"
        "ret\n\t"
        "mov     qword rbx, '//bin/sh'"
        "ret\n\t"
        "mov     rsi, rsp\n\t"
        "mov     al, 0x3b\n\t"
        "ret\n\t"
        "syscall\n\t"
        "xor     rdx, rdx\n\t"
        "ret"
    );
    // uggcf://furyy-fgbez.bet/furyypbqr/svyrf/furyypbqr-603.ugzy
}

int main(void) {
    char buffer[16];
    gets(buffer);
}