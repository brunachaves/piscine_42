int ft_str_is_alpha(char *str)
{
    if (*str == '\0')
        return (1);
    while(*str)
    {
        if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
        {
            return (0);
        }
        str++;
    }
    return (1);
}