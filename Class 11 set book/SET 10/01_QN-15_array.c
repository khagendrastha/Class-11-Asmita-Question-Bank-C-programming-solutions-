//WAP that reads the elelment of two 2 x 2 matrix finds their sumand display the matrices//
#include <stdio.h>
int main() {
    int matrix1[2][2], matrix2[2][2], sum[2][2];
    int i, j;
    // Input for first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter the Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Input for second matrix
    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
             printf("Enter the Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Calculate sum of matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Display the matrices
    printf("First matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}