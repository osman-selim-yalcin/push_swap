#include "push_swap.h"

void	sa(t_info *k)
{
	int c;

	c = k->a[0];
	k->a[0] = k->a[1];
	k->a[1] = c;
	ft_printf("sa\n");
}

void	sb(t_info *k)
{
	int c;

	c = k->b[0];
	k->b[0] = k->b[1];
	k->b[1] = c;
	ft_printf("sb\n");
}

void	ss(t_info *k)
{
	sa(k);
	sb(k);
}

void	pa(t_info	*k)
{
	int tmp;
	int a;
	int say;
	
	tmp = k->b[0];
	say = k->b_len;
	a = 0;
	while (say != 0)
	{
		k->b[a] = k->b[a + 1];
		a++;
		say--;
	}
	a = 0;
	say = k->a_len;
	while (say != 0)
	{
		k->a[say] = k->a[say - 1];
		a++;
		say--;
	}
	k->a[0] = tmp;
	k->a_len += 1;
	k->b_len -= 1;
	ft_printf("pa\n");
}

void	pb(t_info	*k)
{
	int tmp;
	int b;
	int say;

	tmp = k->a[0];
	say = k->a_len;
	b = 0;
	while (say != 0)
	{
		k->a[b] = k->a[b + 1];
		b++;
		say--;
	}
	b = 0;
	say = k->b_len;
	while (say != 0)
	{
		k->b[say] = k->b[say - 1];
		b++;
		say--;
	}
	k->b[0] = tmp;
	k->b_len += 1;
	k->a_len -= 1;
	ft_printf("pb\n");
}
