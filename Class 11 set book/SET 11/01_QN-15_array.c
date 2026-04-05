/*WAP that reads the 'n' number of elements of an aaray from the user and sorts the elements of the array 
in ascending order*/
#include <stdio.h>
int main() {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n], i, j, temp;
    printf("Enter %d numbers: ", n);   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Bubble sort algorithm
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
    // Display the sorted array
    printf("Array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}