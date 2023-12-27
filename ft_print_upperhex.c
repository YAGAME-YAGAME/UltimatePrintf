/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upperhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:35:33 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/27 12:36:20 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_print_upperhex(unsigned long long n)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		ft_print_upperhex(n / 16);
	ft_putchar(hex_digits[n % 16]);
}
