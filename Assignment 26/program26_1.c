//Question 1 : Write a program which accept string from user
//convert it into lower case.
#include<stdio.h>

void StrWrx(char *str)
{
    while(*str != '\0')
    {
        if((65 <= *str ) && (*str <= 90))
        {
            int upper = *str;
            *str = upper + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);

    StrWrx(Arr);

    printf("Converted string is : %s ",Arr);

    return 0;
}