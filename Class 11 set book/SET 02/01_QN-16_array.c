// WAP to enter n integers into an array and caculate the sum of entered numbers//
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n]; // Variable Length Array (VLA) in C99 and later
    printf("Fill the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum =sum+ arr[i];
    }
    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}