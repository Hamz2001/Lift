/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:40:16 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/02 16:40:18 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr_base(int n, char s)
{
    int i;
    int base;

    i = 0;
    base = ft_strlen(n);
    if(base == 10 && (s == 'd' || s == 'i'))
        base = "0123456789";
    else if (base == 16 && s == 'x')
        base = "0123456789abcdef";
	else if (base == 16 && s == 'X')
        base = "0123456789ABCDEF";
	i = ft_strlen(n);
}

int	ft_hexadecimal(unsigned int nb, char c)
{
	char		*base_hxd;
	int			i;

	i = count_num(nb, 16);
	if (c == 'X')
		base_hxd = "0123456789ABCDEF";
	else
		base_hxd = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexadecimal(nb / 16, c);
		ft_putchar(base_hxd[nb % 16]);
	}
	else
		ft_putchar(base_hxd[nb % 16]);
	return (i);
}
