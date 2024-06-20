//Count the number of words

#include<iostream>
using namespace std;

int WordCount(char*str)
{
    int iCnt = 0;
    int iCountW = 1;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            if(iCnt != 0)
            {
                iCountW++;
            }
            iCnt = 0;
        }
        else 
        {
            iCnt++;
        }
        str++;
    }
    return iCountW;
}

int main()
{
    char Arr[100] = "   Marvellous Multi OS Pune";
    int iRet = 0;

    iRet = WordCount(Arr);

    cout<<"The number of words is : "<<iRet;

    return 0;
}