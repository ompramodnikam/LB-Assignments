//Display the position of common ON bits of both the numbers : 

#include<iostream>
using namespace std;

int CountCmnbit(int iNo1, int iNo2)
{
    int iCount = 0;
    unsigned iMask = 1;

    while((iNo1 > 0) && (iNo2 > 0))
    {
        if((iNo1 & iMask == 1) && (iNo2 & iMask == 1))
        {
            iCount++;
        }
        iNo1 >>= 1;
        iNo2 >>= 1;
    }
    return iCount;
}

int main()
{
    unsigned int iValue1 = 0;
    unsigned int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the first number : ";
    cin>>iValue1;

    cout<<"Enter the second number : ";
    cin>>iValue2;

    iRet = CountCmnbit(iValue1, iValue2);

    cout<<"Common ON bits of both the number is : "<<iRet;

    return 0;
}