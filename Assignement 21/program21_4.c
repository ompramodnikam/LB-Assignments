//Accept N numbers from user and accept Range, Display all the elements from that range
#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter the starting point: \n");
    scanf("%d", &iValue1);

    printf("Enter the ending point: \n");
    scanf("%d", &iValue2);

    printf("Elements in the range [%d, %d] are: ", iValue1, iValue2);
    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}