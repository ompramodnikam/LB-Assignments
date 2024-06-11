//Question1 : Write a program which accept the number from user and display its multiplication factor...

//INPUT : 12
//OUTPUT : 144 (1 * 2 * 3 * 4 * 6)

//INPUT : 13
//OUTPUT : 1   (1)

//INPUT : 10
//OUTPUT : 10 (1 * 2 * 5)

#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    iRet = MulFact(iValue);

    printf("Factor Multiplicaiton of %d is : %d ",iValue,iRet);

    return 0;
}
//Time Complexity : N
