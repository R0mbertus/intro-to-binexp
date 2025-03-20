#include <stdio.h>

int main(void) {
    char a, b, c, d;

    printf("Enter the keycode: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (*(int *)&d == 0xDEADBEEF)
        printf("win!\n");
}