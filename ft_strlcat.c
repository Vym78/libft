/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:15:49 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/14 12:16:42 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t n;
	size_t ldst;

	i = 0;
	n = size;
	while (dst[i] && n-- != 0)
		i++;
	ldst = &dst[i] - dst;
	n = size - ldst;
	if (n == 0)
		return (ldst + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (n != 1)
		{
			dst[i++] = src[j];
			n--;
		}
		j++;
	}
	dst[i] = '\0';
	return (ldst + (&src[j] - src));
}
