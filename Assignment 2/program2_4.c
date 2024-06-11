//Question 9 : Accept two numbers from user and print first number in second number of times
//Input : 12  5
//Output : 12 12 12 12 12

#include<stdio.h>

void Display(int iNo1, int iFrequency)
{
    int iCnt = 0;

    for(iCnt == 1 ; iCnt < iFrequency ; iCnt++)
    {
        printf("%d\t",iNo1);
        iCnt++;
    }
}

int main()
{
    int iValue1 = 0;
    int iCount = 0;

    printf("Enter first number : ");
    scanf("%d\n",&iValue1);

    printf("Enter second number : ");
    scanf("%d\n",&iCount);

    Display(iValue1, iCount);

    return 0;
}
