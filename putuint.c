/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putuint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:23:27 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/17 15:52:53 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int	n)
{
	unsigned long	number;

	number = n;
	if (number > 9)
	{
		ft_putuint(number / 10);
		ft_putchar((number % 10) + '0');
	}
	else
	{
		ft_putchar(number + '0');
	}
	return ((int)ft_strlen(number));
}