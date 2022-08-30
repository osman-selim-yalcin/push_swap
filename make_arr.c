#include "push_swap.h"

int counter(int argc, char **argv)
{
	int a;
	int	i;
	int counter;

	a = 1;
	counter = 0;
	while (argc-- != 1)
	{
		i = 0;
		while(argv[a][i] != '\0')
		{
			while ((argv[a][i] == ' ' || argv[a][i] == '+' || argv[a][i] == '-') && argv[a][i] != '\0')
				i++;
			if (argv[a][i] <= 57 && argv[a][i] >= 48)
				counter++;
			while ((argv[a][i] <= 57 && argv[a][i] >= 48) && argv[a][i] != '\0')
				i++;
		}
		a++;
	}
	return (counter);
}

int *before_atoi(int argc, char **argv, int *arr)
{
	int a;
	char	**str;
	int i;
	int	ai;

	ai = 0;
	a = 1;
	while (argc-- != 1)
	{
		str = ft_split(argv[a], ' ');
		i = 0;
		while (str[i] != NULL)
		{
			arr[ai] = ft_atoi(str[i]);
			ai++;
			i++;
		}
		a++;
	}
	return (arr);
}
