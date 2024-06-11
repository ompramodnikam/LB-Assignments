//Question3 : Write a program which accept distance in kilometer and convert it into meter
//consider 1km = 1000m

//Input : 5
//Output : 5000

#include<stdio.h>

int KMToMeter(int iKM)
{
    int iMeter  = 0;

    iMeter = 1000/iKM;
   
    return iMeter;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometer : ");
    scanf("%d\n",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is : %d",iRet);

    return 0;
}

//TIME COMPLECITY : O(0)