/*WAP to enter 10 integer number into an array,disolay the entered numbers and also calculate the 
sum of entered numbers */
#include <stdio.h>
int main() {
    int arr[10], sum = 0;
    printf("Enter 10 integers: ");  
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    } 
    // Displaying the entered numbers and calculating the sum of the entered numbers
    printf("Entered numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
     sum =sum+ arr[i];
    }

    printf("\nSum of the entered numbers: %d\n", sum);

    return 0;
}