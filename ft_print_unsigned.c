/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:25:13 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/27 13:20:09 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_numlen(unsigned int n)
{
	size_t	len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

size_t	ft_print_unsigned(unsigned int n)
{
	size_t	total_size;

	total_size = ft_numlen(n);
	if (n > 9)
	{
		ft_print_unsigned(n / 10);
		ft_print_unsigned(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
	return (total_size);
}
