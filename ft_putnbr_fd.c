#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nombre;

	nombre = n;
	if (n < 0)
	{
		nombre = -n;
		write(fd, "-", 1);
	}
	if (nombre > 9)
	{
		ft_putnbr_fd(nombre / 10, fd);
		ft_putnbr_fd(nombre % 10, fd);
	}
	else
		ft_putchar_fd(nombre + '0', fd);
}