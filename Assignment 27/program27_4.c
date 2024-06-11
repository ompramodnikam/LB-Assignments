//Question 4 : Write a program which accept string and one character form user
//cheak the last occurance of the character 

#include<stdio.h>

int CheakOccurance(char *str, char ch)
{
    int iCount = 1;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCount;
        }
        iCount++;
        str++;
    }
    return iPos;
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

    iRet = CheakOccurance(Arr,cValue);

    printf("The last  occurance of that character is : %d ",iRet);

    return 0;
}