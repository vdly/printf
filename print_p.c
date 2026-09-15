/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 00:25:51 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/15 18:29:29 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(uintptr_t ptr, char *hexa)
{
	int		len;

	len = 0;
	if (ptr < 16)
		return (print_c(hexa[ptr]));
	else
	{
		len += print_p(ptr / 16, hexa);
		return (len + print_p(ptr % 16, hexa));
	}
}
