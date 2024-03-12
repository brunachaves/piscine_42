#include <stdlib.h>

int ft_strlen(char *str)
{
    int counter;

    counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    return (counter);
}

void ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int size;

    size = ft_strlen(src) + 1;
    dest = (char *)malloc(sizeof(char) * size);
    ft_strcpy(dest, src);
    return (dest);
}