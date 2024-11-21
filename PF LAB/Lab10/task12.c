#include <stdio.h>

int linear_search(int arr[], int size, int target, int index)
{
    if (index >= size) return -1;
    if (arr[index] == target) return index;
    return linear_search(arr, size, target, index + 1);
}

int main()
{
    int arr[] = {4, 2, 7, 1, 9};
    int target = 7;
    int index = linear_search(arr, 5, target, 0);
    if (index != -1) printf("Target found at index %d\n", index);
    else printf("Target not found\n");
    return 0;
}
