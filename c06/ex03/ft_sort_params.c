#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return(*s1 - *s2);
}

void    ft_swap(char *a, char *b)
{
    char aux[100];
    int i;

    i = 0;
    while (a[i])
    {
        aux[i] = a[i];
        i++;
    }
    aux[i] = '\0';
    i = 0;
    while (b[i])
    {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
    i = 0;
    while (aux[i])
    {
        b[i] = aux[i];
        i++;
    }
    b[i] = '\0';
}

void    ft_sort_argv(char **argv, int argc)
{
    int i;
    int j;
    int compare;

    i = 1;
    while(i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            compare = ft_strcmp(argv[i], argv[j]);
            if (compare > 0)
            {
                ft_swap(argv[i], argv[j]);
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char ** argv)
{
    int i;

    i = 1;
    ft_sort_argv(argv, argc);
    while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return (0);
}