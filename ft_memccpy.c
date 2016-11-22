/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:50:58 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/14 11:53:44 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*cdst;
	char	*csrc;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	while ((size_t)i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == c)
		{
			dst = (void *)cdst;
			return (dst + 1 + i);
		}
		i++;
	}
	dst = (void*)cdst;
	return (NULL);
}
