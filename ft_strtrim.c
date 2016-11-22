/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:49:54 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/17 13:49:58 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*result;
	char const	*end;
	char const	*start;

	start = NULL;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (!(*s == ' ' || *s == '\n' || *s == '\t'))
		{
			start = (start == NULL) ? s : start;
			end = s;
		}
		s++;
	}
	if (start == NULL)
		return (ft_strnew(0));
	if ((result = (char *)malloc(sizeof(char) * (end - start + 2))) == NULL)
		return (NULL);
	s = start;
	while (s <= end)
		*result++ = *s++;
	*result = '\0';
	return (result - (end - start + 1));
}
