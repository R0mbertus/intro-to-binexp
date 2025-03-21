#include <stdio.h>

int main(void) {
    struct {
        char a;
        char b;
        char c;
        char d;
    } locals;

    printf("Enter the keycode: ");
    scanf("%d %d %d %d", &locals.a, &locals.b, &locals.c, &locals.d);

    if (*(int *)&locals.a == 0xDEADBEEF)
        printf("win!\n");
}