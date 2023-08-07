#include <stdlib.h>

int	calculate_len(int start, int end)
{
	int i;

	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			i++;
			start++;
		}
	}
	else
	{
		while(start >= end)
		{
			i++;
			start--;
		}
	}
	return (i);
}

int	*ft_range(int start, int end)
{
	int i;
	int *ret_arr;
	int len;

	i = 0;
	len = calculate_len(start, end);
	ret_arr = malloc(sizeof(int) * len);
	if (!ret_arr)
		return (0);
	if (start <= end)
	{
		while (start <= end)
		{
			ret_arr[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			ret_arr[i] = start;
			i++;
			start--;
		}
	}
	return (ret_arr);
}
