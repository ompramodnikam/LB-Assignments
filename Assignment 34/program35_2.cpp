//Calculate the sum of digits : 

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigits(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    iRet = SumDigits(iValue);

    cout<<"Sum of Digits is : "<<iRet<<endl;

    return 0;
}