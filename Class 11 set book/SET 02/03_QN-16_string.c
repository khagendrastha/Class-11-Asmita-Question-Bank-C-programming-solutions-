//WAP to demostrate the use of strlen() and strrev() function//
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Read a string from user input
    // Calculate the length of the string using strlen()
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    // Reverse the string using strrev()
    strrev(str); 
    printf("Reversed string: %s\n", str);

    return 0;
}