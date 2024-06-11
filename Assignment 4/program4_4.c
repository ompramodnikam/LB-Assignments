//Question4: Write a program which accept the number from user and find the summetion of its all non factors.

//Input : 12
//Output : 50

//Input : 10
//Output : 37


#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summetion of non factors of %d is : %d",iValue, iRet);

    return 0;
}

//Time Complexity : N