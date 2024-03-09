unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int limit_cpy_char;
    unsigned int i;

    limit_cpy_char = size - 1;
    i = 0;
    while (src[i] && limit_cpy_char)
    {
        dest[i] = src[i];
        i++;
        limit_cpy_char--;
    }
    dest[i] = '\0';
    return (i);
}