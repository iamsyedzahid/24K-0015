#include <stdio.h>

void bubble_sort(int arr[], int size)
{
    if (size <= 1) return;
    for (int i = 0; i < size - 1; i++)
      {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble_sort(arr, size - 1);
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
