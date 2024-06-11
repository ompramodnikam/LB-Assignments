//Question 2 : Write a program which accept string and one character form user
//cheak the count of the character

#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);
    
    printf("Enter the character that you want to search : ");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("The count of that character is : %d ",iRet);

    return 0;
}