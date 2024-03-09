int is_alphanum(char c)
{
        if (c > 64 && c < 91)
            return (1);
        else if (c > 96 && c < 123)
            return (1);
        else if (c > 47 && c < 58)
            return (1);
        return (0);
}

int is_lowercase(char c)
{
        if (c > 96 && c < 123)
            return (1);
        return (0);
}

int is_uppercase(char c)
{
        if (c > 64 && c < 91)
            return (1);
        return (0);
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0 || is_alphanum(str[i - 1]) == 0)
        {
            if (is_lowercase(str[i]))
            {
                str[i] -= 32;
            }
        }
        else
        {
            if (is_uppercase(str[i]))
            {
                str[i] += 32;
            }
        }
        i++;
    }
    return (str);
}