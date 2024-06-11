//Question 3 : Write a program which accept string and one character form user
//cheak the first occurance of the character 

#include<stdio.h>
#include<stdbool.h>

int CheakOccurance(char *str, char ch)
{
    int iCount = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCount++;
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

    iRet = CheakOccurance(Arr,cValue);

    printf("The first  occurance of that character is : %d ",iRet);

    return 0;
}