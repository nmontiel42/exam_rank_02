#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while(str[i]== 32 || str[i] == 9)
			i++;
		while((str[i] != 32 && str[i] != 9) && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
