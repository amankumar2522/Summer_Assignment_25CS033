#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -2147483648; // smallest possible integer

    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648)
    {
        printf("There is no second largest element.");
    }
    else
    {
        printf("Second largest element is: %d", secondLargest);
    }

    return 0;
}