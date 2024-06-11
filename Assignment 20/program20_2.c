//Accept N numbers from user and return difference between frequency of even number and odd numbers
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int i = 0, iFrequency = 0, iEvenFrequency = 0, iOddFrequency = 0;

    for (i = 0; i < iSize; i++)
    {
        if ((Arr[i] % 2) == 0)
        {
            iEvenFrequency++;
        }
        else
        {
            iOddFrequency++;
        }
    }
    return (iFrequency = iEvenFrequency-iOddFrequency);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);
    printf("%d\n", iRet);

    free(p);

    return 0;
}