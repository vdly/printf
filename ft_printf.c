/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:43:48 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/15 18:26:15 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_check(char format, va_list arg)
{
	if (format == 'c')
		return (print_c(va_arg(arg, char)));
	else if (format == 's')
		return (print_s(va_arg(arg, char *)));
	else if (format == 'p')
		return (print_p(va_arg(arg, uintptr_t), "0123456789abcdef"));
	else if (format == 'd' || format == 'i')
		return (print_dec(va_arg(arg, int)));
	else if (format == 'u')
		return (print_u(va_arg(arg, unsigned int)));
	else if (format == 'x')
		return (print_x(va_arg(arg, long), "0123456789abcdef"));
	else if (format == 'X')
		return (print_x(va_arg(arg, long), "0123456789ABCDEF"));
	else if (format == '%')
		return (0);
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
			print_check(str[i], args);
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
