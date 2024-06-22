#include<iostream>
using namespace std;

int OffBit(int iNo)
{
    unsigned int iMask = 0x00000240;
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Updated number is : "<<iRet;

    return 0;
}




