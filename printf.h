/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:24:28 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/27 14:37:51 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int n);
size_t	ft_print_address(unsigned long long n);
size_t	ft_print_lowerhex(unsigned long long n);
size_t	ft_print_upperhex(unsigned long long n);
size_t	ft_print_unsigned(unsigned int n);

#endif
