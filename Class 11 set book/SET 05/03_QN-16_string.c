/* WAP to enter two strings and concatenate two strings and also convert the first entered string to 
uppercase string */
#include <stdio.h>
#include <string.h>     
int main() {
   char str1[100], str2[100],str3[100];
    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2);
    strcpy(str3, str1);
    // Using strcat() to concatenate str1 and str2 and store the result in str1
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    // Converting the first entered string to uppercase
    strupr(str3);
    printf("Uppercase string: %s\n", str3);  
     return 0;
}