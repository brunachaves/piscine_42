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

/* int main (void)
{
    int num =  2147483647;
    int prime = ft_is_prime(num);
    printf("is prime: %d\n", prime);
    return (0);
} */