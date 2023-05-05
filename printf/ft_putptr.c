/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:26:08 by anagarc4          #+#    #+#             */
/*   Updated: 2023/05/04 15:26:16 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t n, char *base)
{
	size_t	res;
	size_t	len;

	res = 0;
	len = ft_strlen(base);
	if (n >= (uintptr_t)len)
	{
		res += ft_putptr(n / len, base);
		res += ft_putptr(n % len, base);
	}
	else
		res += ft_putchar(base[n % len]);
	return (res);
}
/* 
int	main(void)
{
    void *mango;

    mango = 83678567856781HJ;
    ft_putptr("%p", mango);
    printf("\n");
    printf("%p", mango);
    printf("\n");
    printf("%x", (unsigned int) hoola);
    return (0);
} */