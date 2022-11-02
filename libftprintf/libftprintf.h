/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:31:04 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/01 14:31:06 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int    handling2(const char *str, va_list arg, int j);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_putstr(char *s);
// int ft_putnbr_base(int n);
size_t	ft_strlen(int n);
int	ft_putnbr_unsigned(unsigned int n);

#endif

