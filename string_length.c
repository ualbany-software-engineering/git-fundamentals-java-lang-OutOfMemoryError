#include <stdio.h>
#include <string.h>

/* This program prints the calculated length of a user inputted string */

int main()
{

/* Identifier declarations */
    int i, stringLength;
    char inputString[1000]; 

/* Initialize Counts */
    stringLength = 0;
    
/* Request user input */
    printf("Enter string:");
    scanf("%s", inputString);
    
/* Iterate through list and add to length */
    for (i = 0; inputString[i] != '\0'; ++i) {
        stringLength++;      
    }

/* Print results */   
    printf("Length of string without standard functions: %d\n", stringLength);
    printf("Length of string with standard functions: %ld", strlen(inputString));
    
    return 0;
}