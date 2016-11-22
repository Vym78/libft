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