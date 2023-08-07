#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *temp;

	i = 0;
	len = ft_strlen(src);
	temp = malloc(sizeof(char) * (len + i));
	if (!temp)
		return (NULL);
	temp[len + 1] = '\0';
	while(len-- >= 0)
		temp[len] = src[len];
	return (temp);
}
