
//  a   b   c   d   e   f

#include<iostream>
using namespace std;

void Display()
{
    static char i = 'a';
    
    if(i <= 'f')
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