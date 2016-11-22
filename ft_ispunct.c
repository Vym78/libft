#include "libft.h"

int		ft_ispunct(int c)
{
	if (ft_isgraph(c) == 1 && ft_isalnum(c) == 0)
		return (1);
	else
		return (0);
}