#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int size;
    int i;

    if (min >= max)
        return (NULL);
    size = max - min;
    arr = (int *)malloc(sizeof(int) * size);
    i = 0;
    while (i < size)
    {
        arr[i] = min;
        min++;
        i++;
    }
    return (arr);
}