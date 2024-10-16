
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	i = -1;
	while (++i < len)
		ft_putchar_fd(s[i], fd);
}
