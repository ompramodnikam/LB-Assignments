//Question3 : Write a program to find the odd factorial of number

//Input : 5
//Output : 15 (5 * 3 *   1)

//Input : -5
//Output : 15 (5 * 3 *   1)

#include<stdio.h>

int OddFact(int iNo)
{
    int iCnt = 0;
    int iOFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {   
        if(iCnt % 2 != 0)
        {
            iOFact = iOFact * iCnt;
        }
    }
    return iOFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    iRet = OddFact(iValue);

    printf("Factorial of %d is : %d ",iValue,iRet);
    
    return 0;
}

//Time Complexity : N
