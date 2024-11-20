#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}

int main()
{
    int n, i, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findMaxMin(arr, n, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}