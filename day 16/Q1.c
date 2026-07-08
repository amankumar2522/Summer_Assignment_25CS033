#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, total;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Sum of numbers from 1 to n+1
    total = (n + 1) * (n + 2) / 2;

    printf("Missing number is: %d", total - sum);

    return 0;
}