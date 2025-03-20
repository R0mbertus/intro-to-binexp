#include <stdio.h>

void foo(void) {
    char space_for_shellcode[80];

    // Give the address of the buffer so we can return to it to execute our shellcode
    printf("buffer address: %lX\n", &space_for_shellcode);

    gets(space_for_shellcode);
}

int main(void) {
    foo();
}
