//Question1 : Write a program which accept number from user and display below patter 

//Input : 3
//Output : *    *   *   #   #   #

//Input : -3
//Output : *    *   *   #   #   #


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
        printf("*\t");
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
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
