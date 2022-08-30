/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:00:13 by osyalcin          #+#    #+#             */
/*   Updated: 2022/07/31 13:46:03 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	signcheck(char letter, va_list k)
{
	int	last;

	last = 0;
	if (letter == 'c')
		last = ft_putchar((char)va_arg(k, int));
	else if (letter == 's')
		last = ft_putstr(va_arg(k, char *));
	else if (letter == 'p')
	{	
		last += ft_putstr("0x");
		last += ft_putnbr_base_p(va_arg(k, void *));
	}
	else if (letter == 'd' || letter == 'i')
		last = ft_putnbr(va_arg(k, int));
	else if (letter == 'u')
		last = ft_putnbr_base(va_arg(k, unsigned int), "0123456789");
	else if (letter == 'x')
		last = ft_putnbr_base(va_arg(k, unsigned int), "0123456789abcdef");
	else if (letter == 'X')
		last = ft_putnbr_base(va_arg(k, unsigned int), "0123456789ABCDEF");
	else if (letter == '%')
		last = ft_putchar('%');
	return (last);
}

int	ft_printf(const char *str, ...)
{
	int			last1;
	va_list		t;

	last1 = 0;
	va_start(t, str);
	while (*str)
	{
		if (*str == '%')
		{
			last1 += signcheck(*++str, t);
			if (!str)
				return (last1);
		}
		else
				last1 += ft_putchar(*str);
		str++;
	}
	va_end(t);
	return (last1);
}
