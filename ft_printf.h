/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:55:34 by aoussama          #+#    #+#             */
/*   Updated: 2024/11/23 20:03:25 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int ft_putchar(int c);
int	ft_putnbr(int n);
int ft_putstr(char *s);
int ft_pointer(void *ptr);
int ft_calc(long n);
int check_hexa(char c,unsigned long hex);
int ft_hexadecimal(unsigned long hex);
int	ft_uns_putnbr(unsigned int n);
#endif