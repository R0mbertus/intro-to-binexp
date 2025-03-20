#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[16];
    long long int admin = 1;

    // Use gets to overwrite admin variable to be bigger than 1
    gets(buffer);

    if (admin > 1)
        printf("win!\n");
}
