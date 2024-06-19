//Concatination : 

#include<stdio.h>

void strcatX(char *src , char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char Arr[100] ="Marvellous Infosystems";
    char Brr[100] = " Logic Building";

    strcatX(Arr,Brr);

    printf("Updated string is : %s ", Arr);

    return 0;
}