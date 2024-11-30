#include <stdio.h>
#include <stdlib.h>

struct Sparse {
    int row, col, val;
};

void addSparse(struct Sparse *a, int sizeA, struct Sparse *b, int sizeB) {
    int i = 0, j = 0, k = 0;
    struct Sparse result[sizeA + sizeB];

    while (i < sizeA && j < sizeB) {
        if (a[i].row == b[j].row && a[i].col == b[j].col) {
            result[k++] = (struct Sparse){a[i].row, a[i].col, a[i].val + b[j].val};
            i++;
            j++;
        } else if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }
    while (i < sizeA) result[k++] = a[i++];
    while (j < sizeB) result[k++] = b[j++];

    printf("Resulting Sparse Matrix:\n");
    for (int x = 0; x < k; x++) {
        printf("Row: %d, Col: %d, Val: %d\n", result[x].row, result[x].col, result[x].val);
    }
}

int main() {
    struct Sparse a[] = {{0, 0, 5}, {1, 2, 8}, {2, 3, 6}};
    struct Sparse b[] = {{0, 0, 3}, {1, 2, 7}, {3, 3, 4}};
    addSparse(a, 3, b, 3);
    return 0;
}
