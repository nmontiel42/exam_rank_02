#include <unistd.h>
#include <stdbool.h>

int	ws_count(char *str, int i)
{
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}

void	epur_str(char *str)
{
	int	i;
	int	len;
	bool	fw;

	i = ws_count(str, 0);
	fw = true;
	while(str[i])
	{
		if (!fw)
			write(1, " ", 1);
		len = ft_wordlen(str + i);
		write(1, str + i, len);
		fw = false;
		i = ws_count(str, i + len);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
