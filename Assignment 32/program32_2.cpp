/*
        o   m   i   i   e
        o   m   i   i  
        o   m   i   
        o   m  
        o   

*/



#include<iostream>
#include<string.h>

using namespace std;

void Pattern(char *str, int length)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = length ; i >= 1 ; i--)
    {
        for(j = 1 ; j <= i ; j++)
        {
            cout<<*str<<"\t";
            str++;
            iCnt++;
        }
        str = str - iCnt;
        iCnt = 0;
        cout<<endl;
    }
}

int main()
{
    char Arr[100] = "Marvellous";

    Pattern(Arr,strlen(Arr));

    return 0;
}