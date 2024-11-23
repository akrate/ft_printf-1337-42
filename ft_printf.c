/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:33:25 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/23 20:04:15 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int check_format(char frm,va_list list)
{
	if (frm == 'c')
		return (ft_putchar(va_arg(list,int)));
	else if (frm == 's')
		return (ft_putstr(va_arg(list,char *)));
	else if (frm == 'p')
		return (ft_pointer(va_arg(list,void *)));
	else if (frm == 'd' || frm == 'i')
	return (ft_putnbr(va_arg(list,int)));
	else if (frm == 'u')
		return (ft_uns_putnbr(va_arg(list,unsigned int)));
	else if (frm == 'x' || frm == 'X')
		return (check_hexa(frm,va_arg(list,unsigned int)));
	else if(frm == '%')
		return (ft_putchar('%'));
	return (0);
}
int ft_printf(const char *str, ...)
{
	int i;
	int calc;
	va_list list;
	
	i = 0;
	calc = 0;
	va_start(list,str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			calc += check_format(str[i],list);
		}
		else
			calc += ft_putchar(str[i]);
		i++;
	}	
	return (calc);
}
// int main()
// {
// 	int i,o;
// 	int *p;
// 	i = ft_printf("%x\n",212121212);
// 	printf("\\\\\\\\\\\\\n");
// 	o = printf("%x\n",212121212);
// 	printf("ft = %d\nprintf = %d\n",i,o);
// }