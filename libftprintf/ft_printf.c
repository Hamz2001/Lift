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

#include "ft_printf.h"

static int	ft_handling(const char *str, va_list arg, int j, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i++])
		{
			if (str[i] == 's' && str[i++])
				j += ft_putstr (va_arg(arg, char *));
			else if (str[i] == 'c' && str[i++])
				j += ft_putchar (va_arg(arg, int));
			else if ((str[i] == 'i' || str[i] == 'd') && str[i++])
				j += ft_putnbr (va_arg(arg, int));
			else if (str[i] == 'u' && str[i++])
				j += ft_putnbr_unsigned (va_arg(arg, unsigned int));
			else if (str[i] == 'p' && str[i++])
				j += ft_putstr ("0x") + ft_address (va_arg(arg, size_t));
			else if (str[i] == 'x' && str[i++])
				j += ft_hexadicimal (va_arg (arg, unsigned int), str[i - 1]);
			else if (str[i] == 'X' && str[i++])
				j += ft_hexadicimal (va_arg (arg, unsigned int), str[i - 1]);
			else if (str[i] == '%' && str[i++])
				j += ft_putchar ('%');
		}
		else
			j += ft_putchar (str[i++]);
	}
	return (j);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		j;
	int		i;

	j = 0;
	i = 0;
	va_start (arg, str);
	j = ft_handling (str, arg, j, i);
	va_end (arg);
	return (j);
}
// int main()
// {
// 	printf("%d\n",ft_printf("%x\n",161900));
// 	printf("%d\n",printf("%x\n",161900));
// }