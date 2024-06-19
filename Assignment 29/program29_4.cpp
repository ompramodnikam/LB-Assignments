//convert the capital character into the small : 

#include<iostream>
using namespace std;

void StrCpySmall(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
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

    StrCpySmall(Arr,Brr);

    cout<<"Updated string is : "<<Brr;

    return 0;
}