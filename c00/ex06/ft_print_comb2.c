#include <unistd.h>

void    ft_space()
{
    char    space;

    space = ' ';
    write(1, &space, 1);
}

void    ft_comma_space()
{
    char    comma;

    comma = ',';
    write(1, &comma, 1);
    ft_space();
}

void    ft_comb(char a, char b)
{
    
    write(1, &a, 1);
    write(1, &b, 1);
}

void    ft_print_comb2(void)
{
    char    first;
    char    second;
    char    third;
    char    forth;

    first = '0';
    second = '0';
    while (first <= '9')
    {
        while (second <= '9')
        {
            third = first;
            forth = second;
            forth++;
            if (forth > '9')
            {
                third++;
                forth = '0';
            }
            while (third <= '9')
            {
                while (forth <= '9')
                {
                    ft_comb(first, second);
                    ft_space();
                    ft_comb(third, forth);
                    if (first == '9' && second == '8' && third == '9' && forth == '9')
                        break;
                    ft_comma_space();
                    forth++;
                }
                third++; 
                forth = '0';
            }
            second++;
            third = '0';
        }
        first++;
        second = '0';
    }
}

/* int main(void)
{
    ft_print_comb2();
    return (0);
}  */
