//Question 4 : Write a program which accept the range from user and print addition of all the even number. Number should be positive

//Input : 23    30
//Output : 108      

//Input : 10    18
//Output : 70

//Input : -10    2
//Output : Invalid Range

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAdd = 0;

    if( iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range...\n");
        return 0;
    }
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
       if(iCnt % 2 == 0)
       {
            iAdd = iAdd + iCnt;
       }
    }

    return iAdd;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting number : ");
    scanf("%d",&iValue1);
    printf("Enter the ending  number : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Sum of even number inbetween range is : %d ",iRet);


    return 0;
}