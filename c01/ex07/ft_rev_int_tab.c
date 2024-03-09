void    ft_swap(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int    nb_swaps;

    i = 0;
    nb_swaps = size / 2;
    while(nb_swaps)
    {
        ft_swap(tab + i, tab + (size -(1 + i)));
        i++;
        nb_swaps--;
    }
}