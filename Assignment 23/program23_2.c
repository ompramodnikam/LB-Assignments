//Question 2 : Accept one character from user and cheak wether it is capital or not 

#include<stdio.h>
#include<stdbool.h>

bool CapitalAlpha(char ch)
{
    bool bFlag = false;

    if((65 <= ch) && (ch <= 90))
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

    bRet = CapitalAlpha(cValue);

    if(bRet == true)
    {
        printf("The character is capital...");
    }
    else
    {
        printf("The character is not capital...");
    }



    return 0;
}