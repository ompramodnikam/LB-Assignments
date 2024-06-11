//Question 4 : Accept one character from user and cheak wether it is Small character or not

#include<stdio.h>
#include<stdbool.h>

bool CheakSmall(char ch)
{
    bool bFlag = false;

    if((97 <= ch) && (ch <= 122))
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

    bRet = CheakSmall(cValue);

    if(bRet == true)
    {
        printf("The character is Small...");
    }
    else
    {
        printf("The character is not Small...");
    }

    return 0;
}