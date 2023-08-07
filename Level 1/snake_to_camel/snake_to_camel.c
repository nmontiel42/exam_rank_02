#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char	*str;
	char c;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while(str[i])
		{
			if (str[i] == '_')
			{
				i++;
				c = str[i] - 32;
				write(1, &c, 1);
			}
			else
			{
				c = str[i];
				write(1, &c, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
