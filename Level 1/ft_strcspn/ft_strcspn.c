#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(s[i] != reject[j] && reject[j] != '\0')
			j++;
		if (reject[j] != '\0')
			break ;
		i++;
	}
	return (i);
}

