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

void vuln() {
    char buffer[16];

    // Use gets to
    //   First leak puts address using puts and return back to main
    //   Second use the puts leak to get libc base and call system("/bin/sh")
    gets(buffer);
}

int main() {
    puts("main");
    vuln();
}