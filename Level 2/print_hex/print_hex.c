#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int acum;

	i = 0;
	acum = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		acum = (acum * 10) + (str[i] - '0');
		i++;
	}
	return (acum * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb)
{
	if (nb > 16)
		print_hex (nb / 16);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

int	main(int argc, char **argv)
{
	int	n_basedec;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	n_basedec = ft_atoi(argv[1]);
	print_hex(n_basedec);
	write(1, "\n", 1);
	return (0);
}
