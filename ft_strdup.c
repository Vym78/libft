/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:15:16 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/14 12:15:34 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	int		i;
	int		length;
	char	*dup;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	length = i + 1;
	i = 0;
	if ((dup = (char*)malloc(length)))
	{
		while (i <= length)
		{
			dup[i] = s1[i];
			i++;
		}
		return (dup);
	}
	else
		return (NULL);
}
