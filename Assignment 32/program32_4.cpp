/*
        str = Omiie 
        
        O   M   I   I   E
        O   M   I   I   E
        O   M   I   I   E
        O   M   I   I   E
        O   M   I   I   E

*/

#include<iostream>
#include<string.h>

using namespace std;

void Pattern(char *str, int length)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1 ; i <= length ; i++)
    {
        for(j = 1 ; j <= length ; j++)
        {
            if((*str >= 'a') && (*str <= 'z'))
            {
                *str = *str - 32;
                cout<<*str<<"\t";
                str++;
                iCnt++;
            }
            else
            {
                cout<<*str<<"\t";
                str++;
                iCnt++;
            }
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