//Question 1 :    Accept character from user and cheak wether it is alphabet or not A - Z , a - z.

#include<stdio.h>
#include<stdbool.h>

bool CheakAlphabet(char ch)
{
    bool bFlag = false;

    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))

    {
        bFlag = true;
    }
    
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = CheakAlphabet(cValue);

    if(bRet == true)
    {
        printf("It is a Alphabet...");
    }
    else
    {
        printf("It is not a character...");
    }

    return 0;
}