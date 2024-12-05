#include "ft_printf.h"

int	ft_address(unsigned long nbr)
{
	int	count;

	if (nbr == 0)
		return (write (1, "(nil)", 5));
	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_base(nbr, LOWER16, 16);
	return (count);
}
