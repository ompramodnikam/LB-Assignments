//Question1 : Write a program which accept from user and print that numeber of $  &   * on screen.

//Input : 5 
//Output : $    *   $   *   $   *   $   *   $   *

//Input :  3
//Output : $    *   $   *   $   *

//Input : -3 
//Output : $    *   $   *   $   *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    Pattern(iValue);

    return 0;
}

//Time Complexity : N