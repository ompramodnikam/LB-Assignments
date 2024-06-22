//cheak wether the 3rd or 7th bit is on or off : 

#include<iostream>
using namespace std;

void CheakbitOnOff(unsigned int iNo, int pos1, int pos2)
{
    int iResult1 = 0;
    int iResult2 = 0;

    iResult1 = iNo & pos1;
    iResult2 = iNo & pos2;

    if((iResult1 == pos1))
    {
        cout<<"3rd bit is ON"<<endl;
    }
    if((iResult2 == pos2))
    {
        cout<<"7th bit is ON"<<endl;
    }
    if((iResult1 != pos1))
    {
        cout<<"3rd bit is OFF"<<endl;
    }
    if((iResult2 != pos2))
    {
        cout<<"7th bit is OFF"<<endl;
    }
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iNo1 = 0x00000004;
    unsigned int iNo2 = 0x00000040;

    cout<<"Enter the number : ";
    cin>>iValue;

    CheakbitOnOff(iValue,iNo1,iNo2);

    return 0;
}