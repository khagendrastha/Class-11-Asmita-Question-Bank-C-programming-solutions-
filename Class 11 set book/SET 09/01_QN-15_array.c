//WAP to enter any 10 numbers and sort them in ascending order using array// 
//This method is also known as bubble sort method//
#include <stdio.h>
int main() {
    int arr[10], i, j, temp;
    printf("Enter 10 numbers:");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }   
    // Bubble sort algorithm
    for (i = 0; i < 10 - 1; i++) {
        for (j = i+1; j < 10 ; j++) {
            if (arr[i] > arr[j ]) { // Pay extra attention to the condition here, it should be arr[i] > arr[j] for ascending order
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Print the sorted array
    printf("The numbers in ascending order are:");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}