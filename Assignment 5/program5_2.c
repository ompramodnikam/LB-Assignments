//Question2 : Write a program which accept from user and print that numeber till that number.

//Input : 8 
//Output : 1    2   3   4   5   6   7   8   

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}

//Time Complexity : N