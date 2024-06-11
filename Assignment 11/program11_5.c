//Question 5 : Write a program which accept the number from user and difference between summetion of even and odd digits 

#include<stdio.h>

int SubEvenOdd(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    while(iNo > 0)
    {

        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        if(iDigit % 2 != 0)
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
          
    }
    return iEven - iOdd;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = SubEvenOdd(iValue);

    printf("Frequency of two is : %d",iRet);

    return 0;
}