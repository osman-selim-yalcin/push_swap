#include "push_swap.h"

void showa(t_info *k)
{
    int i;

    i = 0;

    ft_printf("\n");

    while (i < k->a_len)
    {
        ft_printf("a = %d", k->a[i]);
        ft_printf(" i %d\n", i);
        i++;
    }
}

void showb(t_info *k)
{
    int i;

    i = 0;

    ft_printf("\n");
    while (i < k->b_len)
    {
        ft_printf("b = %d", k->b[i]);
        ft_printf(" i = %d\n", i);
        i++;
    }
}