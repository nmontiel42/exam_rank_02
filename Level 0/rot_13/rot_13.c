#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char *str;
	char	c;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	str = argv[1];
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
		{
			c = str[i] + 13;
			write(1, &c, 1);
		}
		else if (str[i] >= 'n' && str[i] <= 'z' || str[i] >= 'N' && str[i] <= 'Z')
		{
			c = str[i] - 13;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
