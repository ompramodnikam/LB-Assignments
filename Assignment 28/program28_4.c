//print small string of capital character : 

#include<stdio.h>

void StrNCpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[100] ="Marvellous multi OS";
    char Brr[30];

    StrNCpyX(Arr,Brr);

    printf("Updated string is : %s ", Brr);

    return 0;
}