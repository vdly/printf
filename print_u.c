/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 00:39:19 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/15 17:36:41 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_dec(unsigned int dec)
{
	int	len;

	len = 0;
	if (dec < 0)
	{
		dec *= -1;
		len++;
		print_c('-');
	}
	if (dec < 10)
		len += print_c(dec + '0');
	else
	{
		len += print_dec(dec / 10);
		len += print_dec(dec % 10);
	}
	return (len);
}
