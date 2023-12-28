/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:24:28 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/28 15:26:07 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int n);
size_t	ft_print_address(unsigned long long n);
size_t	ft_print_lowerhex(unsigned int n);
size_t	ft_print_upperhex(unsigned int n);
size_t	ft_print_unsigned(unsigned int n);

#endif
