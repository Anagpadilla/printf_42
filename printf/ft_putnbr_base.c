/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:57:29 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 15:57:32 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int n, char *base)
{
	long long int	num;
	size_t			result;
	size_t			len;

	num = n;
	result = 0;
	if (num < 0)
	{
		num = -num;
		result += ft_putchar('-');
	}
	len = ft_strlen(base);
	if (num >= (long long int)len)
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
	unsigned int	num;
	char			*base;
	int				result;

    num = 586866;
    base = "0123456789ABCDEF";
    result = ft_putnbr_base(num, base);
    printf("El número %u en la base %s es: %d\n", num, base, result);
    return (0);
}
 */