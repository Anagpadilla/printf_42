/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:51:07 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/05 15:51:10 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_putnbr_base(unsigned int n, char *base)
{
	size_t					result;
	size_t					len;
	unsigned long long int	num;

	result = 0;
	num = n;
	len = ft_strlen(base);
	if (num >= (uintptr_t)len)
	{
		result += ft_putnbr_base(num / len, base);
		result += ft_putnbr_base(num % len, base);
	}
	else
		result += ft_putchar(base[num % len]);
	return (result);
}
/* #include <stdio.h>

int	main(void)
{
	unsigned int	n;
	char			*base;

	n = 123;
	base = "0123456789ABCDEF";
	printf("n in base %s: ", base);
	ft_u_putnbr_base(n, base);
	printf("\n");
	return (0);
}
 */