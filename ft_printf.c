/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:01:17 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/27 14:17:12 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	size_t	total_length;

	i = 0;
	total_length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			total_length += ft_format(args, s[i + 1]);
		else
			total_length += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (total_length);
}

size_t	ft_format(va_list args, char c)
{
	size_t	total_length;

	total_length = 0;
	if (c == 'c')
		total_length += ft_putchar(va_arg(args, char));
	else if (c == 's')
		total_length += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		total_length += ft_print_address(va_arg(args, unsigned long long));
	else if (c == 'd')
		total_length += ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		total_length += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		total_length += ft_printunsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		total_length += ft_print_lowerhex(va_arg(args, unsigned long long));
	else if (c == 'X')
		total_length += ft_print_upperhex(va_arg(args, unsigned long long));
	else if (c == '%')
		total_length += ft_putchar('%');
	return (total_length);
}
