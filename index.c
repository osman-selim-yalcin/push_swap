#include "push_swap.h"

void	duplicate(t_info *k)
{
	int i;
	int *c;
	int l;
	
	i = k->a_len;
	c = malloc(sizeof(int) * i);
	l = 0;
	while (i-- != 0)
	{
		c[l] = k->a[l];
		l++;
	}
	csort(c, k->a_len);
	lastindex(c, k);
	free(c);
}

void csort(int *c, int len)
{
	int a;
	int b;
	int temp;
	int len2;
	int den;

	den = 0;
	len2 = len;
	while (len-- != len2 / 2 - 1)
	{
		a = 0;
		b = 1;
		while (a != len2 - 1)
		{
			if (c[a] > c[b])
			{
				temp = c[a];
				c[a] = c[b];
				c[b] = temp;
			}
			a++;
			b++;
		}
	}
}

void lastindex(int *c, t_info *k)
{
	int a;
	int b;
	int s;
	int x;

	a = 0;
	b = 0;
	s = k->a_len;
	while (s-- != 0)
	{
		x = k->a_len;
		b = 0;
		while (x-- != 0)
		{
			if (c[a] == k->a[b])
			{
				k->a[b] = a;
				x = 0;
			}
			b++;
		}
		a++;
	}			
}
