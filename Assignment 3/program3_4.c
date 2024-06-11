//Question 4 : Accept one character from user and convert case of that character
//Input : a Output : A

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue == 'a')
    {
        printf("Uppercase of a is : A");
    }
    else if(cValue == 'D')
    {
        printf("Uppercase of b is : d");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c\n",&cValue);

    DisplayConvert(cValue);

    return 0;
}