/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:48:19 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/21 10:58:06 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*str_new;
	unsigned int	counter;

	if (!(str_new = ft_strnew(len)) || !s)
		return (NULL);
	str = (char *)s;
	counter = 0;
	while (counter < len)
	{
		str_new[counter] = str[start];
		start++;
		counter++;
	}
	return (str_new);
}
