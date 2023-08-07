#include <unistd.h>

void	putnbr(int nb)
{
	char	c;

	if (nb > 9)
		putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void) argv;
	putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
