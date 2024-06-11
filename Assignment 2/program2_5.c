//Question 10 : Accpet Number from user and cheak wether the number is even or odd.

#include<stdio.h>

typedef int bool;
#define true 1
#define false 0

bool CheakEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%de\n",&iValue);

    bRet = CheakEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is a even number ",iValue);
    }
    else
    {
        printf("%d is a odd number ",iValue);
    }


    return 0;
}