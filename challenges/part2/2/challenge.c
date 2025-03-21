#include <stdio.h>
#include <string.h>

void win(void) { 
    printf("win!\n"); 
}

int main(void) {
    // Struct to ensure ordering ;)
    struct {
        char input[8];
        char index;
        long long int result[4];
    } locals;

    printf("Enter index to edit into: ");
    scanf("%d *[^\n]", &locals.index);

    if (locals.index > 3 || locals.index < 0) {
        printf("Invalid index!\n");
        return 1;
    }

    printf("Enter number to put in array: ");
    fgets(locals.input, 10, stdin);

    locals.result[locals.index] = *(long long *)&locals.input;
}