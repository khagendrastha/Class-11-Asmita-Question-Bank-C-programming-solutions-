//WAP to read N integer and sort them in ascending order 
#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter the number of integers (size of array): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Sort the array in ascending order using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) { // Pay extra attention to the condition here, it should be arr[i] > arr[j] for ascending order
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Print the sorted array
    printf("Integers in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}