/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:34:20 by anaamaja          #+#    #+#             */
/*   Updated: 2024/12/04 12:30:44 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *str, unsigned int base)
{
	int	count;

	count = 0;
	if (nbr > base)
		count += ft_putnbr_base(nbr / base, str, base);
	count += ft_putchar(str[(nbr % base)]);
	return (count);
}
