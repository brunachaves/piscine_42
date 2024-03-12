#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN(nbr) (nbr % 2)
#define SUCCESS 0

#include <unistd.h>

typedef enum {FALSE = 1, TRUE = 0} t_bool;

void    ft_putstr(char *str);
t_bool  ft_is_even(int nbr);

#endif