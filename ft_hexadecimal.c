/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:44:14 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/23 20:04:25 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_hexadecimal(unsigned long hex)
{
	int	calc;

	calc = 0;
	char *bas;
	bas = "0123456789abcdef";
	if (hex >= 16){
		calc = calc + ft_hexadecimal(hex / 16);
	}
	calc = calc + ft_putchar(bas[hex % 16]);
	return(calc);
}

static int ft_hexaupp(unsigned long hex)
{
	int	calc;
	char *bas;

	calc = 0;
	bas = "0123456789ABCDEF";
	if (hex >= 16){
		calc = calc + ft_hexaupp(hex / 16);
	}
	calc = calc + ft_putchar(bas[hex % 16]);
	return(calc);
}

int check_hexa(char c,unsigned long hex)
{
	if (c == 'x')
		return (ft_hexadecimal(hex));
	else
		return (ft_hexaupp(hex));
}
