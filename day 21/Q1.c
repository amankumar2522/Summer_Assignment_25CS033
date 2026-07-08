#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find string length
    while (str[i] != '\0') {
        i++;
    }

    // Display length
    printf("Length of the string = %d\n", i);

    return 0;
}