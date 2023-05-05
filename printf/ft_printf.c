/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:56:18 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 11:56:26 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list args)
{
	int	result;

	result = 0;
	if (format == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (format == '%')
		result += ft_putchar('%');
	else if (format == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		result += ft_putstr("0x");
		result += ft_putptr(va_arg(args, uintptr_t), BASE16LOWER);
	}
	else if (format == 'd' || format == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		result += ft_u_putnbr_base(va_arg(args, unsigned int), BASE10);
	else if (format == 'x')
		result += ft_u_putnbr_base(va_arg(args, unsigned int), BASE16LOWER);
	else if (format == 'X')
		result += ft_u_putnbr_base(va_arg(args, unsigned int), BASE16UPPER);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		size;
	int		i;

	va_start(args, str);
	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			size += ft_format(str[i + 1], args);
			i++;
		}
		else
			size += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}
/* 
#include <stdio.h>

 
int	main(void)
{
	int	result;

    // call ft_printf with a format string and arguments
    result = ft_printf("This is a %s with a %d%% success rate\n", "test", 75);
    
    // print the number of characters printed by ft_printf
    printf("Number of characters printed: %d\n", result);
    
    return (0);
}

 */