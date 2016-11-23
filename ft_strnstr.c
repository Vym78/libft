/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:21:21 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/23 11:39:22 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		len2;

	if (!*little)
		return ((char*)big)		;
	len2 = ft_strlen((char*)little);
	while (*big && (len-- >= len2))
	{
		if (*big == *little && ft_memcmp(big, little, len2) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
