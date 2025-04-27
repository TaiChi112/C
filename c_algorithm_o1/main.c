#include <stdio.h>

int main()
{
    int data[5] = {9, 6, 1, 3, 8};
    int length = sizeof(data) / sizeof(data[0]);
    printf("length of the array: %d\n", length);
    printf("Unsorted array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}