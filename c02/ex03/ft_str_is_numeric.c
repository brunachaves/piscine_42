int ft_str_is_numeric(char *str)
{
    if (*str == '\0')
        return (1);
    while(*str)
    {
        if (!(*str > 47 && *str < 58))
        {
            return (0);
        }
        str++;
    }
    return (1);
}