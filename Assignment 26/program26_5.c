//Question 5 : Write a program which accept string from user
//display the number of white spaces

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);

    iRet = CountWhite(Arr);

    printf("The white spaces are : %d ",iRet);

    return 0;
}