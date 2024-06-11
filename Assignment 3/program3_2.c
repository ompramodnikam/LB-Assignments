//Question 2 : Write a program which accept number from user and print even factors of that numbers 

#include<stdio.h>

void EvenFactors(int iNo)
{ 
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0 && (iNo % 2 ) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d\n",&iValue);

    EvenFactors(iValue);


    return 0;
}