/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:57:48 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/17 15:51:27 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (ft_strlen("(null)"));
	}
	while (*s)
	{
		write(1, &s, 1);
		s++;
		return ((int)ft_strlen(s));
	}
}