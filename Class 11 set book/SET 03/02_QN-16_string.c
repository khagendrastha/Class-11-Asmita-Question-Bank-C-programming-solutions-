//WAP to demonstrate the use of strcpy() , strcat() and strcmp() functions//
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], str3[100];
    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2);
    // Using strcpy() to copy str1 to str3
    strcpy(str3, str1);
    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str3);
    // Using strcat() to concatenate str1 and str2 and store the result in str1
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    // Using strcmp() to compare str1 and str2
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}