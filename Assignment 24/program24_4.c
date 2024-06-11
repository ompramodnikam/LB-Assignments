// Question 4 : Accept character from user. 
//Cheak wether it is speacial symbol or not
//(!,@,#,$,%,^,&,*)

#include<stdio.h>
#include<stdbool.h>

bool ChkSpeacial(char ch)
{
    if(((65 <= ch) && (ch <= 90))  || (97 <= ch) && (ch <= 122))
    {
        return false;
    }
    
    else
    {
        return true;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpeacial(cValue);

    if(bRet == true)
    {
        printf("It is a speacial symbol...");
    }
    else
    {
        printf("It is not a speacial symbol...");
    }

    return 0;
}