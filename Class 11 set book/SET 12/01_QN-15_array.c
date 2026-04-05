/*WAP to find the largest and smallest numbers from a set of 10 numbers entered by the user using array*/
#include <stdio.h>
int main() {
    int arr[10], i, largest, smallest;
    printf("Enter 10 numbers: ");   
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0]; // Assume the first element is the largest
    smallest = arr[0]; // Assume the first element is the smallest

    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}