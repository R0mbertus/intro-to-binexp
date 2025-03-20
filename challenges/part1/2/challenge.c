#include <stdio.h>
#include <string.h>
#include <unistd.h>

void win(void) { 
    printf("win!\n"); 
}

void bar(void) {
    // Struct to ensure ordering ;)
    struct {
        long long int return_pointer;
        char buffer[16];
    } locals;

    // Not too fast! I'll keep my return address unchanged!
    locals.return_pointer = (long long int)__builtin_return_address(0);

    gets(locals.buffer);

    // Set the return address back to the original...
    *(long long int *)&locals.buffer[32] = locals.return_pointer;
}

void foo(void) {
    bar();
}

int main(void) {
    foo();
}