// Question 2 : Accept character form user. 
// If it is capital then display all the characters form the iniput characters till Z. 
// If input character is small then print all the character oin reverse order till a . 
// In other cases return directly.

#include<stdio.h>

void Display(char ch)
{
    if((65 <= ch) && (ch <= 90))
    {
        int Lower = ch+32;
        printf("The converted character is : %c\n",Lower);
    }
    else if((97 <= ch) && (ch <= 122))
    {
        int Upper = ch-32;
        printf("The converted character is : %c\n",Upper);
    }
    else
    {
        printf("%c\n",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}