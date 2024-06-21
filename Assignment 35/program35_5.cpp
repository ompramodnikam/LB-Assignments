//Calculate the multiplication of Digits : 

#include<iostream>
using namespace std;

int MultiDigits(int iNo)
{
    static int iMulti = 1;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iMulti = iMulti * iDigit;
        iNo = iNo / 10;
        MultiDigits(iNo);
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    iRet = MultiDigits(iValue);

    cout<<"Multiplication of Digits is : "<<iRet<<endl;

    return 0;
}