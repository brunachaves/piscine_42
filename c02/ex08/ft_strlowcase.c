int is_uppercase(char c)
{
        if (c > 64 && c < 91)
            return (1);
        return (0);
}

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (is_uppercase(str[i]))
            str[i] += 32;
        i++;
    }
    return (str);
}