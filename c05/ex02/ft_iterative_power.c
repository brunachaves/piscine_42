int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (power == 0 || nb == 0)
        return (1);
    while (power)
    {
        result *= nb;
        power--;
    }
    return (result);
}