//Question 3 : Write a program which accept string from user
//toggle the case

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((97 <= *str ) && (*str <= 122))
        {
            int lower = *str;
            *str = lower - 32;
        }
        else if((65 <= *str ) && (*str <= 90))
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

    strtogglex(Arr);

    printf("Converted string is : %s ",Arr);

    return 0;
}