//Question2 :  Write a program which accept the number from user and display their factors in decreasing order ].

//Input : 12
//Output : 6    4   3   2   1   

//Input : 13 
//Output : 1

//Input : 10
//Output : 5    2   1

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo ; iCnt >=1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d\n",&iValue);

    FactRev(iValue);

    return 0;
}

//Time Complexity : N