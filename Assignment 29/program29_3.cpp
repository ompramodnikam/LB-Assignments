//convert the small character into the capital : 

#include<iostream>
using namespace std;

void StrCpyCap(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[100] = "Marvellous Python 2";
    char Brr[100];

    StrCpyCap(Arr,Brr);

    cout<<"Updated string is : "<<Brr;

    return 0;
}