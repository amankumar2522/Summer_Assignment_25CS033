#include <stdio.h>

// Function to print Fibonacci series
void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");
    fibonacci(terms);

    return 0;
}