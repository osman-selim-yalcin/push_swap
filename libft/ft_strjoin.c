/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmanyalcin <osmanyalcin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:20:52 by osyalcin          #+#    #+#             */
/*   Updated: 2022/07/01 21:15:10 by osmanyalcin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*last;
	size_t	b;

	if (!s1 ||!s2)
		return (0);
	b = ft_strlen(s1);
	last = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!last)
		return (0);
	ft_strlcpy(last, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&last[b], s2, ft_strlen(s2) + 1);
	return (last);
}
