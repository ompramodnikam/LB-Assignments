//Toggle the bit and return modified the number : 

#include<iostream>
using namespace std;

int ToggleBit(unsigned int iNo, unsigned int Pos)
{
    int iResult = 0;

    iResult = iNo ^ Pos;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iPos = 0x00000004;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue,iPos);

    cout<<"Updated number is : "<<iRet;

    return 0;
}