/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:08:25 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/17 15:52:15 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	number;

	number = n;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putchar((number % 10) + '0');
	}
	else
	{
		ft_putchar(number + '0');
	}
	return ((int)ft_strlen(number));
}