/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:07:29 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/23 20:03:43 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uns_putnbr(unsigned int n)
{
 long long u;
 u = n;
	if (u > 9)
	{
		ft_uns_putnbr(u / 10);
		ft_uns_putnbr(u % 10);
	}
	else
		ft_putchar(u + '0');
 return (ft_calc(n));
}
