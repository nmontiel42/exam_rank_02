#include <unistd.h>

int	inter(char *str, char c, int len)
{
	int i;

	i = 0;
	while(str[i] && (i < len || len == -1))
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	char *str;

	if (argc == 3)
	{
		i = 0;
		str = argv[1];
		while(str[i])
		{
			if (!inter(str, str[i], i) && inter(argv[2], str[i], -1))
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
