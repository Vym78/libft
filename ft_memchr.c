/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:56:23 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/14 11:59:12 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;
	unsigned char	uc;

	i = 0;
	cs = (unsigned char *)s;
	uc = c;
	while (i < n)
	{
		if (cs[i] == uc)
			return (cs + i);
		i++;
	}
	return (NULL);
}
