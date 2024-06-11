//Question5 : Write a program which accept the number from user and return difference between summetion of all its factors and non factors.

//Input : 12
//Output : -34  (16 - 50)

//Input : 10
//Output : -29  (8 - 37)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact + iCnt;
        }  
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iNonFact = iNonFact + iCnt;
        }  
    }

    iSum = iFact - iNonFact;
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    iRet = FactDiff(iValue);

    printf("Summetion of factors and non factors of %d is : %d ",iValue,iRet);


    return 0;
}

//Time Complexity : 2N