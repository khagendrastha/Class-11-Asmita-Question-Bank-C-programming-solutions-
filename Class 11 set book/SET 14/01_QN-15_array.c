/*WAP to enter the salary of N numbers of employees and count the number of employees having a salary
between 50000-70000 using an array*/
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    int salaries[n];
    printf("Enter the salaries of the employees:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d: ", i + 1); // Here i + 1 is used to display employee number starting from 1 instead of 0
        scanf("%d", &salaries[i]);
        if (salaries[i] >= 50000 && salaries[i] <= 70000) {
            count++; // Count increases if salary is between 50000 and 70000
        }
    }
    printf("Number of employees with salary between 50000 and 70000: %d\n", count);


    return 0;
}