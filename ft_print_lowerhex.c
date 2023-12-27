/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowerhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:54:30 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/27 12:35:19 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_print_lowerhex(unsigned long long n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_print_lowerhex(n / 16);
	ft_putchar(hex_digits[n % 16]);
}
