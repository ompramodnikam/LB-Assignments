//Question 2 : Write a program which accept string from user
//convert it into upper case.
#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((97 <= *str ) && (*str <= 122))
        {
            int lower = *str;
            *str = lower - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);

    struprx(Arr);

    printf("Converted string is : %s ",Arr);

    return 0;
}