/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:28:01 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/02 21:28:03 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexadecimal(unsigned int nb, char c)
{
	char		*base_hxd;
	int			i;

	i = ft_strlen(nb);
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