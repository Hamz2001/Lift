/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:56:28 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/02 14:56:29 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int i;
	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n *(-1));
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return(ft_strlen(n));
}