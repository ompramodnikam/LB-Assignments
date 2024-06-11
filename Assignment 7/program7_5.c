//Question5 : Write a program which returns difference between even and odd faactorials of given number

//Input : 5
//Output : -7 (8 - 15)

//Input : -5
//Output : -7 (8 - 15)


#include<stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0;
    int iEFact = 1;
    int iOFact = 1;
    int iFactDiff = 0;

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
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {   
        if(iCnt % 2 != 0)
        {
            iOFact = iOFact * iCnt;
        }
    }

    iFactDiff =  iEFact - iOFact;

    return iFactDiff;

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

//Time Complexity : 2N
