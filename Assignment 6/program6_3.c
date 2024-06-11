//Question3 : Write a program to find the factorial of that number 

//Input : 5
//Output : 120

//Input : -5
//Output : 120


#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt ;
    }

    return iFact;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d ",iValue,iRet);
    
    return 0;
}

//Time Complexity : N