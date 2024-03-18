#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (str[i] != ch)
	{
		if (str[i] == '\0')
			return (NULL);
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (&str[i]);
}
