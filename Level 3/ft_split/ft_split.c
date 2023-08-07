#include <stdlib.h>
#include <stdbool.h>

int	wordlen(char *str, int i)
{
	char c;

	c = 0;
	while(str[i] > 32)
	{
		c++;
		i++;
	}
	return (c);
}

bool	ft_separador(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (true);
	return (false);
}

int	wordcount(char *str)
{
	int i = 0;
	int cnt = 0;

	while(str[i])
	{
		while (str[i] && ft_separador(str[i]))
			i++;
		if (str[i] && !ft_separador(str[i]))
		{
			while(str[i] && !ft_separador(str[i]))
				i++;
			cnt++;
		}
	}
	return (cnt);
}

char	**ft_split(char *str)
{
	int	i;
	int j;
	int k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (wordcount(str) + 1))))
		return (NULL);
	while (str[i])
	{
		while(str[i] && ft_separador(str[i]))
			i++;
		if (str[i])
		{
			k = 0;
			if (!(tab[j] = malloc(sizeof(char) * (wordlen(str, i) + 1))))
				return (NULL);
			while(str[i] && !ft_separador(str[i]))
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
	

