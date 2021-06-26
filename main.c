/*
This program calculates the number of digits that are present in a given integer and then prints the number in a column
*/

#include<stdio.h>

int main()
{
    // Variables: number entered by user, counter for the digits, and "i" for divisions
    int originalNumber, divisor, result, amountOfDigits;
    
    // Receiving input
    printf("Enter a natural number: ");
    scanf("%d", &originalNumber);
    
    // Checking if the number is 0
    if(originalNumber == 0)
        printf("\nYour number has 1 digit: \n0\n");    
    else
    {
        // Checking the number of digits
        divisor = 1;
        result = 1;
        amountOfDigits = 0;
        
        while(result != 0)
        {
            result = originalNumber / divisor;
            divisor = divisor * 10;
            amountOfDigits++;
        }
        
        // Organizing the amountOfDigits and divisor, removing the last modification, which lead the division to 0
        divisor = divisor / 100; // divided by 100 because, after getting result == 0, divisor gets multiplied by 10 again
        amountOfDigits--;
        
        // Printing the amount of digits
        printf("\nYour number has %d digits: \n", amountOfDigits);
        
        // Organizing and printing the digits in a column
        while(divisor >= 1)
        {
            printf("%d\n", originalNumber/divisor);
            originalNumber = originalNumber % divisor;
            divisor = divisor / 10;
        }
    }
        
    return 0;
}

