/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:43:50 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/17 15:53:19 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_puthex(uintptr_t num)
{
    char *hex_chars;
	int	count;

    hex_chars = "0123456789abcdef";
    count = 0;
    if (num >= 16)
        count += ft_puthex(num / 16);
    else
		ft_putchar(num % 16);
    count++;
    return (count);
}

int ft_putptr(void *ptr)
{
	uintptr_t	value;
	
	if ((uintptr_t)ptr == 0)
	{
		write(1, "0x0", ft_strlen("0x0"));
		return ((int)(ft_strlen("0x0")));
	}
	value = (uintptr_t)ptr;
	write(1, "0x", 2);
    return (ft_puthex(value) + 2);
}
