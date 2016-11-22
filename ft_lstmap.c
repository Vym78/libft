#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;

	if (lst != NULL)
	{
		ret = (t_list*)malloc(sizeof(f(lst)));
		if (ret == NULL)
			return (NULL);
		ret = f(lst);
		ret->next = ft_lstmap(lst->next, f);
		return (ret);
	}
	return (NULL);
}