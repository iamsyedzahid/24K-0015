#include <stdio.h>

void print_array(int arr[], int size)
{
    if (size == 0) return;
    printf("%d ", arr[0]);
    print_array(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print_array(arr, 5);
    printf("\n");
    return 0;
}
