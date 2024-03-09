int ft_atoi(char *str)
{
    int nb;
    int signal;

    signal = 1;
    nb = 0;
    while(*str == 32 || (*str > 8 && *str < 14))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            signal *= -1;
        str++;
    }
    while ((*str > 47 && *str < 58))
    {
        nb = nb * 10 + (*str - 48);
        str++;
    }
    return (nb * signal);
}