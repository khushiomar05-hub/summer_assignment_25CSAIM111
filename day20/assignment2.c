#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int isSymmetric = 1;

    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) { 
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
