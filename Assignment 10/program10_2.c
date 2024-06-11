//Question 2 : Write a program which accept the number from user and cheak wether it contains zero or not 

#include<stdio.h>
#include<stdbool.h>

int CheakZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10; 

    }
}

int main()
{
    int iValue = 0;
    bool iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CheakZero(iValue);

    if(iRet == true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}