
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (str[i] == ch)
			return (&str[i]);
			i++;
	}
	return (NULL);
}
