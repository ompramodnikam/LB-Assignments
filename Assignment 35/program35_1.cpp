
//  5   *   4   *   3   *   2   *   1   *

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = iNo;
    
    if(1 <= i)
    {
        cout<<i<<"\t"<<"*\t";
        i--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}