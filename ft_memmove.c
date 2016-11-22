/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:01:43 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/14 12:02:06 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (ptr2 < ptr1)
	{
		while (++i <= n)
			ptr1[n - i] = ptr2[n - i];
	}
	else
	{
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (s1);
}
