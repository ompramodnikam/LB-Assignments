//Question 1 : Write a program which display ASCII table. Table contains symnol Decimal, Hexadecimal and Ocatal representation of every memeber from 0 to 255

#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("ASCII value of %c is : %d ", ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character to find its ASCII: ");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}