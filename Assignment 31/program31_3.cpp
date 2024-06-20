//Reverse the each word in place of string : 

#include <iostream>
#include<string.h>

using namespace std;


void Reverce(char *str, int start, int end) 
{
    char temp;
    while (start <= end) 
    {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start++;
        end--;
    }
}

void StrRevWrd(char *src, char* dest , int length) 
{
    int first = 0;
    int last = 0;

    while(last <= length)
    {
        if (last == length || src[last] == ' ') 
        {
            Reverce(src, first, last - 1);
            first = last + 1;
        }
        last++;
    }
}
int main() 
{
    char Arr[100] = "Marvellous Multi OS";
    char Brr[100];

    StrRevWrd(Arr,Brr,strlen(Arr));

    cout <<"Updated string is : "<<Arr<<endl;

    return 0;
}
