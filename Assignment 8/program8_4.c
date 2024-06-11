//Question 4: Write a program which accept tempreture in ferenite and convert it into degree clecuis 

//1 celcuis = (Ferenite - 32) * (5/9)

//Input : 10
//Output : -12.2222

#include<stdio.h>

int TempConversion(int iFerenite)
{
    int iCelcuis = 0;

    iCelcuis = (iFerenite - 32) * (5/9);

    return iCelcuis;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the tempreture in ferenite : ");
    scanf("%d\n",iValue);

    iRet = TempConversion(iValue);

    printf("tempreture in celcuis is : %d ",iRet);

    return 0;
}


//TIME COMPLECITY : O(0)