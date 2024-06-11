//Accept N numbers from user and accept one annother number as NO, return frequency of NO from it
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize, int NO)
{
    int i = 0, iFrequency = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] == NO)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iCount);

    printf("Enter the number:");
    scanf("%d",&iValue);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Frequency(Brr, iCount, iValue);
    printf("Frequency of occuring NO is : %d\n", iRet);

    free(Brr);

    return 0;
}