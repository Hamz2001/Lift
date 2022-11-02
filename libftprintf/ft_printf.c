/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:00:38 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/01 16:00:41 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    ft_printf(const char *str, ...)
{
    va_list arg;
    int i;
    int j;

    i = 0;
    j = 0;
    va_start(arg, str);
	j = handling2(str, arg, j);
	va_end(arg);
    return(j);
}

int main()
{
    unsigned int c = -43;
    printf("%u\n", ft_printf("%u\n",c));
	//printf("%u", c);
}


