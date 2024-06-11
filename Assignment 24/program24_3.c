// Question 3 : Accept character from user. 
//If it is capital then display all the character form the input characters till Z
//If input character is small then print all the characters in reverse order till a .
//In other case return directly 

#include<stdio.h>

void Display(char ch)
{
    if((65 <= ch) && (ch <= 90))
    {
        char c = '\0';
        for(c = ch ; c <= 90 ; c++)
        {
            printf("%c\t",c);
        }
    }
    else if((97 <= ch) && (ch <= 122))
    {
        char c = '\0';
        for(c = ch ; c >= 97 ; c--)
        {
            printf("%c\t",c);
        }
    }
    else
    {
        printf("\n");
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