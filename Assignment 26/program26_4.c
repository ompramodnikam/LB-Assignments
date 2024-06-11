//Question 4 : Write a program which accept string from user
//display the digits from that string

#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((48 <= *str ) && (*str <= 57))
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);

    DisplayDigits(Arr);

    return 0;
}