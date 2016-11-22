#include "libft.h"

int		ft_isxdigit(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 70) || (c >= 97 && c <= 102))
		return (1);
	else
		return (0);
}