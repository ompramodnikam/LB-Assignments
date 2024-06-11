// Accept N numbers from user and accept one another number as NO, check whether NO is present or not
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int NO)
{
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] == NO)
        {
           return TRUE;
        }
        else 
        {
            return FALSE;
        }
    }
    
}

int main()
{
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iCount);

    printf("Enter the number:");
    scanf("%d", &iValue);

    p = (int *)malloc(iCount * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &p[i]);
    }

    iRet = Check(p, iCount, iValue);
    
    if(iRet == TRUE)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    free(p);

    return 0;
}