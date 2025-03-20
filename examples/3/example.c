#include <stdio.h>

void win(void) { printf("win!\n"); }

int main(void) {
    char buffer[16];

    // Use gets to overwrite the return address to point to win
    gets(buffer);
}