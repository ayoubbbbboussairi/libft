#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	k = ft_strlen(needle);
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(&haystack[i], needle, k) == 0 && i + k <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
