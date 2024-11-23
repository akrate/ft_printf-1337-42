/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:25:57 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/23 20:04:03 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbr(int n)
{
 long u;
 u = n;
	if (u < 0)
	{
		ft_putchar('-');
		u *= -1;
	}
	if (u > 9)
	{
		ft_putnbr(u / 10);
		ft_putnbr(u % 10);
	}
	else
		ft_putchar(u + '0');
 return (ft_calc(n));
}
