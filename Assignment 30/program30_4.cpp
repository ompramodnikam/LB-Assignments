//Toggle the string and reverse it 

#include<iostream>
using namespace std;

void StrRevTogX(char*str)
{
    char temp;
    char *first;
    char *last;
    first = str;
    last = str;

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first <= last)
    {
        if(((*first >= 'A') && (*first <= 'Z')) && ((*last >= 'a') && (*last <= 'z')))
        {
            temp = *last - 32;
            *last = *first + 32;
            *first = temp;
            first++;
            last--;
           
        }
        else if(((*first >= 'a') && (*first <= 'z')) && ((*last >= 'A') && (*last <= 'Z')))
        {
            temp = *last + 32;
            *last = *first - 32;
            *first = temp;
            first++;
            last--;
           
        }
        else if(((*first >= 'A') && (*first <= 'Z')) && ((*last >= 'A') && (*last <= 'Z')))
        {
            temp = *last + 32;
            *last = *first + 32;
            *first = temp;
            first++;
            last--;
           
        }
        else if(((*first >= 'a') && (*first <= 'z')) && ((*last >= 'a') && (*last <= 'z')))
        {
            temp = *last - 32;
            *last = *first - 32;
            *first = temp;
            first++;
            last--;
        }
    }
}
int main()
{
    char Arr[100] = "Marvellous";

    StrRevTogX(Arr);

    cout<<"Updated string is : "<<Arr<<endl;

    return 0;
}