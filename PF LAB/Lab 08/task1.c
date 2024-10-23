
#include <stdio.h>

int main() {
	int n, i, j;
  
	printf("Enter size of square matrix: ");
	scanf("%d", &n);

  int matrix[n][n];

  printf("Enter matrix elements:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Matrix is: \n ");
	for (i = 0; i < n; i++) {
	    for (j=0; j < n; j++){
		printf("%3d", matrix[i][j]);
	    }
	    printf("\n");
	}
	printf("Diagonal elements:\n");
	for (i = 0; i < n; i++) {
	 		printf("%d\n", matrix[i][i]);
	}

	return 0;
}
