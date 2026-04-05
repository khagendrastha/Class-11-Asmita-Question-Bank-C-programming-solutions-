// WAP to calculate a factorial value of a number//
#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Calculating the factorial of the number
    for (int i = 1; i <= num; i++) {
        factorial =factorial * i; // factorial = factorial * i;
    }
    printf("Factorial of %d is %d", num, factorial);


    return 0;
}