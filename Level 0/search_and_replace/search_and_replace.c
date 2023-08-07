#include <unistd.h>
#include <stdlib.h>

void	check_arguments(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 4 || argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	int i;
	char *str;

	check_arguments(argc, argv);
	i = 0;
	str = argv[1];
	while(str[i])
	{
		if (str[i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
