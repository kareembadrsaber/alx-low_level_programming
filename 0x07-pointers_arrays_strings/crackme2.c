#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "abc123";
    char input[50];

    printf("Enter the password: ");
    scanf("%s", input);

    if (strcmp(input, password) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied!\n");
    }

    return 0;
}
