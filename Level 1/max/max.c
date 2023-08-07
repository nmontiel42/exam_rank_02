int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int	saved;

	if (!tab[i])
		return (0);
	saved = tab[i];
	i++;
	while (i <= len)
	{
		if (saved < tab[i])
			saved = tab[i];
		i++;
	}
	return (saved);
}

