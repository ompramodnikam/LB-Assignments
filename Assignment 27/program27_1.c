//Question 1 : Write a program which accept string and one character form user
//cheak wether it is present in the string or not

#include<stdio.h>
#include<stdbool.h>

bool CheakChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
        }
        str++;
    }
    if(bFlag== true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string : ");
    scanf("%[^'\n]s",Arr);
    printf("Enter the character that you want to search : ");
    scanf(" %c",&cValue);

    bRet = CheakChar(Arr,cValue);

    if(bRet == true)
    {
        printf("The character is pressent inside the string...");
    }
    else
    {
        printf("The character is not present inside the string...");
    }

    return 0;
}