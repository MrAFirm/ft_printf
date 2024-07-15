/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:44:41 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/15 17:31:19 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_puthex(unsigned int num, char hex)
{
	char			hex_chars_upper;
	char			hex_chars_lower;
	unsigned long	number;
	unsigned char	format;

	number = num;
	hex_chars_upper = "0123456789ABCDEF";
	hex_chars_lower = "01234567890abcdef";
	if (number > 9)
	{
		if (format == 'x')
		{
			ft_puthex((number / 16), hex_chars_lower);
			ft_putchar((number % 16) + '0');
		}
		else if (format == 'X')
		{
			ft_puthex((number / 16), hex_chars_upper);
			ft_putchar((number % 16) + '0');
		}
	}
	else
	{
		ft_putchar
	}
	

}

