#include "ft_printf.h"

int	ft_address(unsigned long nbr)
{
	int	count;

	count = ft_putchar('0');
	count += ft_putchar('x');
	count += ft_putnbr_base(nbr, LOWER16, 16);
	return (count);
}
