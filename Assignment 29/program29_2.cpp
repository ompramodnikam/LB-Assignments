//Remove the white spaces from the string : 

#include<iostream>
using namespace std;

void StrCpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[100] = "Marvel  lous Pyth  on";
    char Brr[100];

    StrCpyX(Arr,Brr);

    cout<<"Updated string is : "<<Brr;

    return 0;
}