/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:04:28 by osyalcin          #+#    #+#             */
/*   Updated: 2022/06/28 23:14:02 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char k);
int	ft_putstr(char *str);
int	ft_putnbr_base(unsigned int n, char *base);
int	ft_putnbr(int nbr);
int	ft_printf(const char *str, ...);
int	ft_putnbr_base_p(void *p);
#endif