// WAP to input the elements of 4 x 3 matrix and printf its elements properly using array.//
#include <stdio.h>
int main() {
    int matrix[4][3]; 
    for (int i = 0; i < 4; i++) { //Declaring rows
        for (int j = 0; j < 3; j++) { //Declaring columns
            printf("Enter the Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]); //Inputting the elements of the matrix
        }
    } 
    // Printing the elements of the matrix
    printf("The elements of the matrix are:\n");
    for (int i = 0; i < 4; i++) {   
        for (int j = 0; j < 3; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n"); //To move to the next line after printing each row
    }
     return 0;
}