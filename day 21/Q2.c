#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, length;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find string length
    length = strlen(str);

    // Reverse the string
    for(i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Display reversed string
    printf("Reversed string = %s\n", str);

    return 0;
}