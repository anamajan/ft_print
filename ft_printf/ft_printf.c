/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:56:57 by anaamaja          #+#    #+#             */
/*   Updated: 2024/12/04 13:55:29 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_hexa_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_hexa_upper(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	int	count;

	va_start(args, str);
	i = 0;
	count = 0;

	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
			{
				count += ft_check(args, str[i + 1]);
				i++;
			}
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

#include <stdio.h>

int	main()
{
	int	me_count;
	int	original_count;

	me_count  = ft_printf("%s: %s\n","this is my first name", "Anass");
	ft_printf("me_legth = %d\n", me_count);
	original_count  = printf("%s: %s\n", "this is my first name", "Anass");
	printf("original_length = %d\n", original_count);
	printf("%s\n", me_count == original_count ? "OK":"Fucked");

}
