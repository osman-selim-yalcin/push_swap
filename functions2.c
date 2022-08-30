#include "push_swap.h"

void rra(t_info *k)
{
	int tmp;
	int len;

	len = k->a_len;
	tmp = k->a[k->a_len - 1];
	while (len != 1)
	{
		k->a[len - 1] = k->a[len - 2];
		len--;
	}
	k->a[0] = tmp;
	ft_printf("rra\n");
}

void rrb(t_info *k)
{
	int tmp;
	int len;

	tmp = k->b[k->b_len - 1];
	len = k->b_len;
	while (len != 1)
	{
		k->b[len - 1] = k->b[len - 2];
		len--;
	}
	k->b[0] = tmp;
	ft_printf("rrb\n");
}

void rrr(t_info *k)
{
	rra(k);
	rrb(k);
}
