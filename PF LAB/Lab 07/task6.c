#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    int count[size];

    for (i = 0; i < size; i++) {
        count[i] = 0;
    }

    for (i = 0; i < size; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
        count[arr[i]] = count[arr[i]] + 1;
    }

    printf("The numbers that occur more than once are: ");
    int found = 0;
    for (i = 0; i < size; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("No numbers occur more than once.\n");
    } else {
        printf("\n");
    }

    return 0;
}
