//cheak wether the 9th or 12th bit is on or off : 

#include<iostream>
using namespace std;

void CheakbitOnOff(unsigned int iNo)
{
    unsigned int iMask9 = 0x00000100;
    unsigned int iMask12 = 0x00000800;
    int iResult9 = 0;
    int iResult12 = 0;

    iResult9 = iNo & iMask9;
    iResult12 = iNo & iMask12;

    if(iResult9 == iMask9)
    {
        cout<<"9th bit is ON";
    }
    else if(iResult9 != iMask9)
    {
        cout<<"9th bit is OFF";
    }
    else if(iResult12 == iMask12)
    {
        cout<<"12th bit is ON";
    }
    else if(iResult12 != iMask12)
    {
        cout<<"12th bit is OFF";
    }
}

int main()
{
    unsigned int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    CheakbitOnOff(iValue);

    return 0;
}