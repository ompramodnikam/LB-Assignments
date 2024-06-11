//Question4 : Write a program to find the Even factorial of number

//Input : 5
//Output : 15 (4 * 2)

//Input : -5
//Output : 8 (4 * 2)


#include<stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0;
    int iEFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {   
        if(iCnt % 2 == 0)
        {
            iEFact = iEFact * iCnt;
        }
    }
    return iEFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    iRet = EvenFact(iValue);

    printf("Factorial of %d is : %d ",iValue,iRet);
    
    return 0;
}

//Time Complexity : N
