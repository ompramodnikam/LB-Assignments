//Question5 : Write a program which accpet N from user and print first 5 multiples of N

//Input : 4
//Output : 4    8   12    16    20 

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= 5*iNo ; iCnt++)
    {
        if(iCnt % iNo == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

//Time Complexity : N