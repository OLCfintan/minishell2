
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	i = -1;
	while (++i < len)
		f(i, &s[i]);
}
