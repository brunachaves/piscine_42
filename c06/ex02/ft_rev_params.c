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

int main(int argc, char ** argv)
{
    int i;

    i = argc - 1;
    while (i)
    {
        ft_putstr(argv[i]);
        i--;
    }
    return (0);
}