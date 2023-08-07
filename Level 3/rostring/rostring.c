#include <unistd.h>

int	ft_isblank(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *str)
{
	int	i = 0;
	int	fwl = 0;

	while(str[i])
	{
		while (ft_isblank(str[i]))
			i++;
		if (str[i] && !ft_isblank(str[i]))
		{
			if (fwl == 0)
			{
				while(str[i] && !ft_isblank(str[i++]))
					fwl++;
			}
			else
			{
				while(str[i] && !ft_isblank(str[i]))
				{
					write(1, &str[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while(ft_isblank(str[i]))
		i++;
	while(fwl--)
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1 && *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
