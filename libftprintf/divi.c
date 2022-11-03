/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:09:30 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/03 21:09:31 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_address(size_t nb)
{
	int i;
	char *base;

	i = ft_strlen_hexa(nb);
	base = "0123456789abcdef";
	if(nb >= 16)
	{
		ft_address(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb % 16]);
    return(i);
}

int	ft_hexadicimal(unsigned int nb, char c)
{
	int i;
	char *base;

	i = ft_strlen_hexa(nb);
	if(c == 'X')
		base = "0123456789ABCDEF";
	if(c == 'x')
		base = "0123456789abcdef";
	if(nb >= 16)
	{
		ft_hexadicimal(nb / 16, c);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb % 16]);
	return(i);
}

