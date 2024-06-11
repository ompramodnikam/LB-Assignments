//Question3 : Write a program which accept number from user and print the number line of that number.

//Input : 4
//Output : -4   -3  -2  -1  0   1   2   3   4  


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
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

//Time Complexity : 2N