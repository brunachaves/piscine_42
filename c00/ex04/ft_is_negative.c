#include <unistd.h>

void    ft_is_negative(int n)
{
    char    positive;
    char    negative;

    positive = 'P';
    negative = 'N';

    if (n < 0)
        write(1, &negative, 1);
    else
        write(1, &positive, 1);
}

/* int main(void)
{
    int num;

    num = 0;
    ft_is_negative(num);
    return (0);
} */