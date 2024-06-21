
//  A   B   C   D   E   F

#include<iostream>
using namespace std;

void Display()
{
    static char i = 'A';
    
    if(i <= 'F')
    {
        cout<<i<<"\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}