//Question 3 : Accept one character from user and cheak wether it is Digit or not 

#include<stdio.h>
#include<stdbool.h>

bool CheakDigit(char ch)
{
    bool bFlag = false;

    if((48 <= ch) && (ch <= 57))
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

    bRet = CheakDigit(cValue);

    if(bRet == true)
    {
        printf("The character is Digit...");
    }
    else
    {
        printf("The character is not Digit...");
    }



    return 0;
}