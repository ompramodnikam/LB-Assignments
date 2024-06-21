//Factorial : 

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    static long int iFact = 1;

    static int iCnt = 1;
    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Factorial(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Factorial of "<<iValue<<" is : "<<iRet;

    return 0;
}