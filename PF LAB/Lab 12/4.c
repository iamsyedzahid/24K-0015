#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);

    arr = (int *)realloc(arr, 2 * n * sizeof(int));
    printf("Enter %d more elements:\n", n);
    for (int i = n; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("New Sum of elements: %d\n", sum);
    free(arr);
    return 0;
}
