/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:08:40 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/28 15:31:20 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_address(unsigned long long n)
{
	size_t	total_length;

	total_length = 0;
	total_length += ft_putstr("0x");
	if (n == 0)
		total_length += ft_putchar('0');
	else
		total_length += ft_print_lowerhex(n);
	return (total_length);
}
