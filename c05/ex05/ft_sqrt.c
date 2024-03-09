int ft_sqrt(int nb)
{
    int sqrt;

    sqrt = 1;
    if (nb > 0)
    {
        while(nb / sqrt)
        {
            if (sqrt * sqrt == nb)
                return (sqrt);
            sqrt++;
        }
    }
    return (0);
}