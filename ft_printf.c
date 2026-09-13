/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:43:48 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/13 21:23:06 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_check(char c)
{
	if (c == 'c')
	{
	}
	else if (c == 's')
	{
	}
	else if (c == 'p')
	{
	}
	else if (c == 'd' || c == 'i')
	{
	}
	else if (c == 'u')
	{
	}
	else if (c == 'x' || c == 'X')
	{
	}
	else if (c == '%')
	{
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i++] == '%')
			print_check(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
