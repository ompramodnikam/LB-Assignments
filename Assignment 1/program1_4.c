//Questin 4 : Accept on number from user and cheak wether it is divisible by 5 or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Cheak(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    bRet = Cheak(iValue);

    if(bRet == TRUE)
    {
        printf("%d is divisible by 5 ",iValue);
    }
    else if(bRet == FALSE)
    {
        printf("%d is not divisible by 5 ",iValue);
    }

    return 0;
}