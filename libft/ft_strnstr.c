
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		found;

	i = -1;
	found = 1;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (++i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			found = 1;
			while (haystack[k] && needle[j] && k < len)
				if (haystack[k++] != needle[j++])
					found = 0;
			if (found && needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
	}
	return (NULL);
}
