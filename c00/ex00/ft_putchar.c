#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int	main(void)
{
	char letter;
	
	letter = 'j';
	ft_putchar(letter);
	return (0);
} */