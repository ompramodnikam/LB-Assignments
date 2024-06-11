// Question 5 : Accept character from user. 
//display its decimal value
//display its octal value
//display its hexadecimal value

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal value of %c is : %d\n",ch,ch);
    printf("Octal value of %c is : %o\n ",ch,ch);
    printf("Hexadecimal value of %c is : %x\n ",ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}