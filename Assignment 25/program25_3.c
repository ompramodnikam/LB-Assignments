//Question 3 : Write a program which acceptstring from user and return difference between frequency of small characters and frequency of capital characters

#include<stdio.h>

int Difference(char *str)
{
    int iFrequencyU = 0;
    int iFrequencyL = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iFrequencyL++;
        }

        if((*str >= 65) && (*str <= 90))
        {
            iFrequencyU++;
        }
        str++;
    }
    return iFrequencyL-iFrequencyU;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("The Count of upperletters is : %d",iRet);


    return 0;
}