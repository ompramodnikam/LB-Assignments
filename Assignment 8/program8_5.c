//Question5 : Write a program which accept area in square feet and convert it into the square meter.

//consider 1square feet  = 0.0929 square meter

//Input : 5
//Output : 0.464515

#include<stdio.h>

double Squaremeter(int isuarefeet)
{
    double dSquaremeter = 0.0f;

    dSquaremeter = isuarefeet*0.0929;
   
    return dSquaremeter;

}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter mesumerement in square feet : ");
    scanf("%d\n",&iValue);

    fRet = Squaremeter(iValue);

    printf("measurement in square meter is : %f",fRet);

    return 0;
}

//TIME COMPLECITY : O(0)