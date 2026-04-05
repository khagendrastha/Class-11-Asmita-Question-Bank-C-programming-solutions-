// WAP that reads a 2 x 3 matrix and display them after transposing the matrix
#include <stdio.h>
int main() {
    int matrix[2][3], transposed[3][2];
    printf("Enter elements of 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
      // Transposing the matrix
    for (int i = 0; i < 3; i++) { // dont forget the replace the value of i and j
        for (int j = 0; j < 2; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    // Displaying the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}