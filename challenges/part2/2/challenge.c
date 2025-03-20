#include <stdio.h>

void win(void) { 
    printf("win!\n"); 
}

int main(void) {
    // Struct to ensure ordering ;)
    struct {
        long long int input;
        int index;
        long long int result[4];
    } locals;

    printf("Enter index to edit into: ");
    scanf("%ld", locals.index);

    if (locals.index > 3 || locals.index < 0) {
        printf("Invalid index!\n");
        return;
    }

    printf("Enter number to put in array: ");
    fgets((char *)&locals.input, 9, stdin);

    locals.result[locals.index] = locals.input;
}