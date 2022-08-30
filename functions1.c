#include "push_swap.h"

void	ra(t_info *k)
{
	int	tmp;
	int	i;
	int len;

	tmp = k->a[0];
	len = k->a_len;
	i = 0;
	while (len != 1)
	{
		k->a[i] = k->a[i + 1];
		i++;
		len--;
	}
	k->a[i] = tmp;
	ft_printf("ra\n");
}

void	rb(t_info *k)
{
	int	tmp;
	int	i;
	int len;

	tmp = k->b[0];
	len = k->b_len;
	i = 0;
	while (len != 1)
	{
		k->b[i] = k->b[i + 1];
		i++;
		len--;
	}
	k->b[i] = tmp;
	ft_printf("rb\n");
}

void rr(t_info *k)
{
	ra(k);
	rb(k);
}