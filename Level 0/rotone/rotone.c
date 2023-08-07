#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char *str;
	char c;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	str = argv[1];
	while(str[i])
	{
		if (str[i] == 'z')
			write(1, "a", 1);
		else if (str[i] == 'Z')
			write(1, "A", 1);
		else if (str[i] >= 'a' && str[i] <= 'y' || str[i] >= 'A' && str[i] <= 'Y')
		{
			c = str[i] + 1;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
