#include "push_swap.h"

void bstart(t_info *k)
{
    while (k->b_len > 0)
    {
        count(k);
    }
    lasttouch(k);
}

void count(t_info *k)
{
    int i;
	int bigger;
	int c;
	int index;

	c = 0;
	index = 0;
	while (c != k->b_len)
	{
		i = 0;
		bigger = 90000;
		while (i != k->a_len)
		{
			if (bigger > k->a[i] && k->b[c] < k->a[i])
			{
				bigger = k->a[i];
				index = i;
			}
			i++;
		}
	    fonks(index, k, c);
		c++;
	}
	gönder(k);
}

void gönder(t_info *k)
{
	while (k->oldaidex > 0)
	{
        if (k->way2 == 2)
            rra(k);
        else
            ra(k);
		k->oldaidex--;
	}
	while (k->oldbindex > 0)
	{
        if (k->way == 2)
            rrb(k);
        else
		    rb(k);
		k->oldbindex--;
	}
	pa(k);
	k->oldaidex = 1000;
	k->oldbindex = 1000;
}

void fonks(int aindex, t_info *k, int bindex)
{
	int t;
	int oldt;
    int road;
    int road2;

    road = 0;
    road2 = 0;
    if (bindex > k->b_len / 2)
    {
        bindex = k->b_len - bindex;
        road = 1;
    }
    if (aindex > k->a_len / 2)
    {
        aindex = k->a_len - aindex;
        road2 = 1;
    }
	t = aindex + bindex;
	oldt = k->oldaidex + k->oldbindex;
	if (t < oldt)
	{
		k->oldaidex = aindex;
		k->oldbindex = bindex;
        k->way = 0;
        k->way2 = 0;
        if (road == 1)
            k->way = 2;
        if (road2 == 1)
            k->way2 = 2;
	}
}

void lasttouch(t_info *k){

    int m;

    m = k->a_len / 2;
    while (k->a[m] != m)
    {
        if (k->a[m] >= m)
        {
            rra(k);
        }
        else
            ra(k);
    }
}