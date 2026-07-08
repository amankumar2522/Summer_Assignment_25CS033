#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, n3 = 0;
    int i, j, flag;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Add elements of first array
    for (i = 0; i < n1; i++)
    {
        arr3[n3++] = arr1[i];
    }

    // Add elements of second array if not already present
    for (i = 0; i < n2; i++)
    {
        flag = 0;

        for (j = 0; j < n3; j++)
        {
            if (arr2[i] == arr3[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            arr3[n3++] = arr2[i];
        }
    }

    printf("Union of arrays is:\n");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}