/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:42:39 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/03 11:42:40 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int ft_printf(const char *, ...);
int    ft_handling(const char *str, va_list arg, int j);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_putstr(char *s);
int	ft_strlen(int n);
size_t	ft_strlen_unsigned(size_t n);
size_t  ft_address(size_t nb);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_hexadicimal(unsigned int nb, char c);
size_t	ft_strlen_hexa(size_t n);
size_t	ft_strlen_char(const char *s);

#endif

