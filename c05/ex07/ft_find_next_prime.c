#include <stdio.h>

int ft_is_prime(int nb)
{
    int div;

    div = 2;
    if (nb <= 1)
    {
        return (0);
    }
    if (nb == 2 || nb  == 3)
        return (1);
    if (nb % 2 == 0 || nb % 3 == 0)
        return (0);
    while(div <= nb / div)
    {
        if (nb % div == 0)
            return (0);
        div++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    int is_prime;

    is_prime = ft_is_prime(nb);
    if (nb <= 1)
        return (2);
    if (is_prime == 1)
        return (nb);
    return (ft_find_next_prime(nb + 1));
}