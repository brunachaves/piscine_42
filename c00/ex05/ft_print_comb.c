#include <unistd.h>

void    ft_print_comb(void)
{
    char    first;
    char    second;
    char    third;
    char    comma;
    char    space;

    comma = ',';
    space = ' ';
    first = '0';
    while (first <= '7')
    {
        second = first + 1;
        while (second <= '9')
        {
            third = second + 1;
            while (third <= '9')
            {
                write(1, &first, 1);
                write(1, &second, 1);
                write(1, &third, 1);
                write(1, &comma, 1);
                write(1, &space, 1);
                third++;
            }
            second++;
        }
        first++;
    }
}

/* int main(void)
{
    ft_print_comb();
    return (0);
} */