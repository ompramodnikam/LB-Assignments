//copy string till limit : 

#include<stdio.h>

void StrNCpyX(char *src , char *dest , int iCnt)
{
    while(*src != '\0' && (iCnt != 0))
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;

    }
    *dest = '\0';
}

int main()
{
    char Arr[100] ="Marvellous Multi OS";
    char Brr[30];

    StrNCpyX(Arr,Brr,10);

    printf("Updated string is : %s ", Brr);

    return 0;
}