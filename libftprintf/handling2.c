/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:48:42 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/02 14:48:44 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    handling2(const char *str, va_list arg, int j)
{
	int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == 's')
                j += ft_putstr(va_arg(arg, char *));
            if (str[i] == 'c')
                j += ft_putchar(va_arg(arg, int));
            if (str[i] == 'i' || str[i] == 'd')
				j += ft_putnbr(va_arg(arg, int));
            if (str[i] == 'u')
                j += ft_putnbr_unsigned(va_arg(arg, unsigned int));
            else if (str[i] == 'X' || str[i] == 'x')
                j += ft_hexadecimal(va_arg(arg, unsigned int), str[i]);
            else if (str[i] == '%')
                j += ft_putchar(va_arg('%', char));
            i++;
        }
         if (str[i] != '\0')
             j += ft_putchar(str[i++]);
    }
    return(j);
}