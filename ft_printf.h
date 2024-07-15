/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:58:05 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/07/13 20:18:21 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>

void			ft_putnbr(int n);
void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putuint(unsigned int	n);
unsigned char	*ft_puthex(unsigned char *buffer, uint32_t value);

#endif