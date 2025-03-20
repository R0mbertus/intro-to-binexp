#include <stdio.h>
#include <string.h>
#include <unistd.h>

void win(void) { 
    printf("win!\n"); 
}

int main(void) {
    char username[16];
    char password[16];

    scanf("%16s", username);
    scanf("%16s", password);

    char results[32];
    sprintf(results, "%s, %s", username, password);
}