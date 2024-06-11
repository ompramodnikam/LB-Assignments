//Accept N numbers from user and accept one another as NO, return index of last occurrence of that NO
#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int NO)
{
    int lastOccurrenceIndex = -1; 
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == NO)
        {
            lastOccurrenceIndex = i; 
        }
    }
    return lastOccurrenceIndex; 
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &iValue);

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence of number is at index %d\n", iRet);
    }

    free(p);

    return 0;
}