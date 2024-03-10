#include <stdio.h>

int ft_sqrt(int nb)
{
    int sqrt;

    sqrt = 1;
    if (nb > 0)
    {
        while (nb / sqrt && sqrt < 46341)
        {
            if (sqrt * sqrt == nb)
                return (sqrt);
            sqrt++;
        }
    }
    return (0);
}

/* int main(void)
{
    int num = 2147483647;
    int sqrt = ft_sqrt(num);
    printf("sqrt: %d\n", sqrt);
    return (0);
} */