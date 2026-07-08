#include <stdio.h>

int main()
{
    char sentence[200];
    int i, words = 1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count words by checking spaces
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t')
        {
            words++;
        }
    }

    // Handle empty input
    if (sentence[0] == '\n')
    {
        words = 0;
    }

    printf("Number of words = %d", words);

    return 0;
}