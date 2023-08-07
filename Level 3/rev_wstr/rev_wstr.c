#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	get_word_len(char *str, int i)
{
	int	w_l;

	w_l = 0;
	while(str[i] > 32 && str[i] != '\0')
	{
		w_l++;
		i--;
	}
	return (w_l);
}

int	main(int argc, char **argv)
{
	int	i;
	char *str;
	int	wl;
	int	wstart;
	int wsc;

	if (argc == 2)
	{
		str = argv[1];
		i = ft_strlen(str) - 1;
		while(i >= 0)
		{
			wl = get_word_len(str, i);
			wstart = i - wl;
			wsc = wstart;
			while (wstart <= i)
			{
				if (str[wstart] != '\0' && str[wstart] != ' ')
					write(1, &str[wstart], 1);
				wstart++;
			}
			i = wsc;
			if (str[i] == ' ')
			{
				write(1, " ", 1);
				i--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
