#include "push_swap.h"

void check_character(int argc, char **argv)
{
	int a;
	int i;

	a = 1;

	while (argc-- != 1)
	{
		i = 0;
		if (argv[a][0] == '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		while(argv[a][i] != '\0')
		{
			if (!(argv[a][i] == ' ') && !(argv[a][i] >= 48 && argv[a][i] <= 57) && !(argv[a][i] == '+') && !(argv[a][i] == '-'))
			{
				write(2, "Error\n", 6);
				exit (1);
			}
			i++;
		}
		a++;
	}
}

void check_symbol(int argc, char **argv)
{
	int a;
	int i;

	a = 1;
	while (argc-- != 1)
	{
		i = 0;
		while(argv[a][i] != '\0')
		{
			if ((argv[a][i] == '+') || (argv[a][i] == '-'))
				if (!(argv[a][i+1] <= 57 && argv[a][i+1] >= 48))
				{
					write(2, "Error\n", 6);
					exit (1);
				}
			i++;
		}
		a++;
	}

}

void check_space(int argc, char **argv)
{
	int a;
	int	i;
	int len_s;

	a = 1;
	len_s = 0;
	while (argc-- != 1)
	{
		i = 0;
		while(argv[a][i] != '\0')
		{
			if (argv[a][i] == ' ')
					len_s++;
			i++;
		}
		if (len_s == (i + 1))
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		a++;
	}
}

void	check_duplicate(t_info *k)
{
	int i;
	int j;

	i = 0;
	while(i <= k->a_len - 1)
	{
		j = 1;
		while((i + j) <= k->a_len - 1)
		{
			if (k->a[i] == k->a[i + j])
			{
				write(2, "Error\n", 6);
				exit (1);
			}
			j++;

		}
		i++;
	}
}

void finish(t_info *k)
{
	//yazılacak//
	return ;
}