/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:37:51 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/23 20:07:20 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_pointer(void *ptr)
{
	unsigned long long i;
	int counter;

	if (ptr == 0)
		return (ft_putstr("(nil)"));
	i = (unsigned long long)ptr;
	counter = write(1,"0x",2);
	counter += ft_hexadecimal(i);
	return (counter);
}
