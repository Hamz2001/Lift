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

int ft_handling(const char *str, va_list arg, int j)
{
	int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '%' && str[i++])
        {
            if (str[i] == 's' && i++)
                j += ft_putstr(va_arg(arg, char *));
            else if (str[i] == 'c' && i++)
                j += ft_putchar(va_arg(arg, int));
            else if ((str[i] == 'i' || str[i] == 'd') && i++)
				j += ft_putnbr(va_arg(arg, int));
            else if (str[i] == 'u' && i++)
                j += ft_putnbr_unsigned(va_arg(arg, unsigned int));
            else if (str[i] == 'X' || str[i] == 'x') 
                {j += ft_hexadicimal(va_arg(arg, unsigned int), str[i]);
                i++;}
            else if (str[i] == 'p' && i++)
                j += ft_putstr("0x") + ft_address(va_arg(arg, size_t));
            else if (str[i] == '%' && i++)
                j += ft_putchar('%');
        }
        else
            j += ft_putchar(str[i++]);
    }
    return(j);
}

int    ft_printf(const char *str, ...)
{
    va_list arg;
    int j;

    j = 0;
    va_start(arg, str);
	j = ft_handling(str, arg, j);
	va_end(arg);
    return(j);
}

// int main()
// {
//     char c[] = "hfhf";
//     //printf("%d\n", ft_printf("%s\n",c));
// 	printf("%d",printf("%w %w %w %l %l %l %l\n"));
//     printf("%d",ft_printf("%w %w %w %l %l %l %l\n"));
// }