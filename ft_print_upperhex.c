/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upperhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:35:33 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/27 16:44:55 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_upperhex(unsigned int n)
{
	char	*hex_digits;
	size_t	total_length;

	hex_digits = "0123456789ABCDEF";
	total_length = 0;
	if (n >= 16)
		total_length += ft_print_upperhex(n / 16);
	total_length += ft_putchar(hex_digits[n % 16]);
	return (total_length);
}
