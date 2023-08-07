#include <stdlib.h>

int	ft_dcount(long int n)
{
	int i;

	i = 0;
	while(n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int nbr)
{
	char *str;
	long int n_copy;
	int n_len;

	n_copy = nbr;
	if (n_copy < 0)
		n_copy *= -1;
	n_len = ft_dcount(n_copy);
	if (nbr < 0)
		n_len++;
	str = malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (NULL);
	str[n_len--] = '\0';
	while(n_len >= 0)
	{
		str[n_len--] = (n_copy % 10) + '0';
		n_copy /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}
