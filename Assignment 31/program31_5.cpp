//Replace the each occurance of the first character small into capital : 

#include<iostream>
using namespace std;

void capitalizeFirstLetter(string & str) 
{
    bool capitalize = true; 

    int i = 0;
    while(i < str.length())
    {
        if (str[i] == ' ') 
        {
            capitalize = true;
        } 
        else if ((capitalize) && (str[i] >= 'a') && (str[i] <= 'z')) 
        {
            str[i] = str[i] - 32;
            capitalize = false;
        } 
        else 
        {
            capitalize = false;
        }
        i++;
    }
}

int main() 
{
    string str = "marvellous infosystems by Piyush khairnar";

    capitalizeFirstLetter(str);

    cout <<"Updated string is : "<<str<<endl;

    return 0;
}
