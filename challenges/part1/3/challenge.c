#include <stdio.h>
#include <string.h>

void win(void) {
    struct {
        char password[8];
        int admin;
    } local;

    if (local.admin == 21)
        printf("win!\n"); 
}

void work(void) {
    char buffer[16];
    memset(buffer, 0, 16);
    gets(buffer);
}

int main(void) {
    work();
    win();
}