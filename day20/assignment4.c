#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate column-wise sum
    printf("\nColumn-wise sum:\n");
    for (j = 0; j < cols; j++) {
        int colSum = 0; 
        for (i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
