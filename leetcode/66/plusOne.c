#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int *tmp = (int *)malloc((digitsSize + 1) * sizeof(int));
    memset(tmp, 0, sizeof(tmp));
    for (int i = 0; i < digitsSize + 1; i++)
    {
        tmp[i + 1] = digits[i];
    }
    for (int i = digitsSize; i > 0; i--)
    {
        /* code */
    }
    
    free(tmp);
}

int main()
{
    int digits[5];
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int returnSize;
    int *result = plusOne(digits, digitsSize, &returnSize);
    printf("Input Array: [4, 3, 2, 1]\nExpected Output: [4, 3, 2, 2]\nResult: [");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", result[i]);
        if (i != returnSize - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}