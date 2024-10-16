
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = (unsigned int)n;
	if (n < 0)
	{
		num = -n;
		ft_putchar_fd('-', fd);
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(num % 10 + '0', fd);
	}
}
