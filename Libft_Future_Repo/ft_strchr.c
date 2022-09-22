#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
