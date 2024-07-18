/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:58:09 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/18 18:45:07 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char c, va_list arg)
{
	char	*format;
	
	format = c;
	if (*format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (*format == 'p')
		return (ft_putptr(va_arg(arg, void *)));
	else if (*format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (*format == 'u')
		return (ft_putuint(va_arg(arg, unsigned int)));
	else if (*format == 'x')
		return (ft_puthex_lower(va_arg(arg, unsigned int), 'x'));
	else if (*format == 'X')
		return (ft_puthex_upper(va_arg(arg, unsigned int), 'X'));
	else
		return (write(1, &c, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (format == NULL)
		return (1);
	va_start(args, format);
	count = printformat(format, args);
	format++;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
			count += printformat(format, args);
		count++;
	}
	va_end(args);
	return (count);
}
