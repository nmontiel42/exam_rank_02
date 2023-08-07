#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= 0 && str[i] <= 9)
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
*/

int	do_op(int a, int b, char c)
{
	int	res;

	res = 0;
	if (c == '+')
		res = a + b;
	else if (c == '-')
		res = a - b;
	else if (c == '*')
		res = a * b;
	else if (c == '/')
		res = a / b;
	else if (c == '%')
		res = a % b;
	return (res);
}

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		printf("%i", do_op(a, b, argv[2][0]));
	}
	printf("\n");	
	return (0);
}

	
