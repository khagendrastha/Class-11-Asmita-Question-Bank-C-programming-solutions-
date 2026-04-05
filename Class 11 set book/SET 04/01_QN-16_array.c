//WAP to enter 10 integers in an array and calculate the sum of entered numbers//
#include <stdio.h>
int main() {
    int arr[10], sum = 0;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculating the sum of the entered numbers
    for (int i = 0; i < 10; i++) {
        sum =sum+ arr[i];
    }
    printf("Sum of the entered numbers: %d\n", sum);
    return 0;
}