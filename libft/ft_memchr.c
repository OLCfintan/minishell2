
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*ss;

	i = 0;
	cc = c;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (*(ss + i) == cc)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}
