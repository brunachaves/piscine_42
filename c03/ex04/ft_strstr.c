#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    char *aux;
    int i;
    int j;

    i = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        if (str[i] == to_find[j])
        {
            aux = str + i;
            while(to_find[j] && str[i] == to_find[j])
            {
                i++;
                j++;
            }
        }
        if (to_find[j] == '\0')
                return (aux);
        i++;
    }
    return(NULL);
}