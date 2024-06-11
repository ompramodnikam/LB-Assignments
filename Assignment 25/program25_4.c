//Question 4 : Write a program which acceptstring from user 
// cheak wether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool CheakVowels(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') ||(*str == 'O') ||(*str == 'U') ||
        (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bFlag = true;
        }
        str++;
    }
    return bFlag;
    
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    bRet = CheakVowels(Arr);

    if(bRet == true)
    {
        printf("The string contains vowel...");
    }
    else
    {
        printf("The string dont have vowerl...");
    }

    return 0;
}