/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:10:46 by anaamaja          #+#    #+#             */
/*   Updated: 2024/12/04 13:46:19 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned int nbr)
{
	int	count;

	count = ft_putnbr_base(nbr, LOWER16, 16);
	return (count);
}
