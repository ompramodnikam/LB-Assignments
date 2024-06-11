////Question5 : Write a program which accept number from user and print its table 

//Input : 2
//Output : 20   18  16  14  12  10  8   6   4   2

#include<stdio.h>

void Number(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        iMul = iNo * iCnt ;
        printf("%d\t",iMul);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    Number(iValue);
    
    return 0;
}

//Time Complexity : N