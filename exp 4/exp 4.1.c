#include <stdio.h>
#include <stdlib.h>

int main() {
    int row1, col1, row2, col2;

    // Input the sizes of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &col1);

    // Input the sizes of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }

    // Dynamically allocate memory for the matrices
    int** matrix1 = (int**)malloc(row1 * sizeof(int*));
    for (int i = 0; i < row1; i++) {
        matrix1[i] = (int*)malloc(col1 * sizeof(int));
    }

    int** matrix2 = (int**)malloc(row2 * sizeof(int*));
    for (int i = 0; i < row2; i++) {
        matrix2[i] = (int*)malloc(col2 * sizeof(int));
    }

    int** resultMatrix = (int**)malloc(row1 * sizeof(int*));
    for (int i = 0; i < row1; i++) {
        resultMatrix[i] = (int*)malloc(col2 * sizeof(int));
    }

    // Input elements for the matrices
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication and store the result
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < row1; i++) {
        free(matrix1[i]);
    }
    for (int i = 0; i < row2; i++) {
        free(matrix2[i]);
    }
    for (int i = 0; i < row1; i++) {
        free(resultMatrix[i]);
    }
    free(matrix1);
    free(matrix2);
    free(resultMatrix);

    return 0;
}
