//copy string : 

#include<stdio.h>

void StrCpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyX(Arr,Brr);

    printf("Updated string is : %s ",Brr);


    return 0;
}