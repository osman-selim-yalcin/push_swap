/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhelp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:02:30 by osyalcin          #+#    #+#             */
/*   Updated: 2022/06/28 23:14:22 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char k)
{
	write(1, &k, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	l;
	int	p;

	if (!str)
		str = "(null)";
	l = 0;
	p = 0;
	while (str[p])
	{
		l += ft_putchar(str[p]);
		p++;
	}
	return (l);
}

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	unsigned int	len;
	int				k;
	int				p;

	p = 0;
	while (base[p])
		p++;
	len = (unsigned int)p;
	k = 0;
	if (nbr < len)
		k += ft_putchar(base[nbr]);
	if (nbr >= len)
	{
		k += ft_putnbr_base(nbr / len, base);
		k += ft_putnbr_base(nbr % len, base);
	}
	return (k);
}

int	ft_putnbr_base_p(void *p)
{
	int				count;
	unsigned long	p2;

	count = 0;
	p2 = (unsigned long)p;
	if (p2 < 16)
		count += ft_putchar("0123456789abcdef"[p2]);
	if (p2 >= 16)
	{
		count += ft_putnbr_base_p((void *)(p2 / 16));
		count += ft_putnbr_base_p((void *)(p2 % 16));
	}
	return (count);
}

int	ft_putnbr(int nbr)
{
	int		count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += ft_putstr("-2");
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
