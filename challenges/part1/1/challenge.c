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

    // printf("\ninput: %d %d %d %d\n", a, b, c, d);
    printf("\ninput: %lX\n", *(int *)&locals.a);

    if (*(int *)&locals.a == 0xDEADBEEF)
        printf("win!\n");
}