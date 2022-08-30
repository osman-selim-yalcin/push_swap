#include "push_swap.h"

void start(t_info *k)
{
	int average;

	while (k->a_len > 2)
	{
		average = mean(k);
		if (k->a[0] < average && k->a[k->a_len - 1] > k->a[0])
		{
			pb(k);
		}
		else if (k->a[k->a_len - 1] < average)
		{
			rra(k);
			pb(k);
		}
		else
			ra(k);
	}
}

int mean(t_info *k)
{
	int alen;
	int last;

	last = 0;
	alen = k->a_len - 1;
	while (alen >= 0)
	{
		last += k->a[alen];
		alen--;
	}
	last = last / k->a_len;
	return (last);
}
