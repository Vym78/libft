/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:10:46 by auhuynh           #+#    #+#             */
/*   Updated: 2016/11/23 11:10:48 by auhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (alst && *alst)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		free(*alst);
		*alst = NULL;
	}
}
