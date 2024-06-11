// Accept n numbers from user and display numbers which are even and divible by 5
#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;

    printf("Numbers which are even and divisible by 5 are: ");
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            if (Arr[i] % 5 == 0)
            {
                printf("%d ", Arr[i]);
            }
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements that you want: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}