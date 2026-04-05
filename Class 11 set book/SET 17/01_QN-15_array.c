//WAP to transpose a 3 x 4 matrix. Your program should dipslay each matrix separately
#include <stdio.h>
int main() {
    int matrix[3][4], transpose[4][3];
    // Input for the original matrix
    printf("Enter elements of the 3x4 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Display the original matrix
    printf("Original matrix:\n");   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Display the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}