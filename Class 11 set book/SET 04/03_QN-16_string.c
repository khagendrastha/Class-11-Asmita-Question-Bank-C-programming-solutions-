//WAP to entert a string, convert entered string to uppercase string and find the length of the string//
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    // Converting the entered string to uppercase
    strupr(str);
    printf("Uppercase string: %s\n", str);  
    // Finding the length of the string
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
     return 0;
}