//Question 4 : Write a program which accept the number from user and count frequency of odd digits.

#include<stdio.h>

int MulDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;
    
    while(iNo > 0)
    {
        
        iDigit = iNo % 10;
        
        iMul = iMul * iDigit;
        iNo = iNo / 10; 
        
    }
    return iMul;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("Mul of digits is : %d",iRet);

    return 0;
}