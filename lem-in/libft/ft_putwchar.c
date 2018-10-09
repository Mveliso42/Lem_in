/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:27:34 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:27:36 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <wchar.h>

int		ft_putwchar(wchar_t c)
{
	if (c < 0x80)
		ft_putchar(c);
	else if (c < 0x800)
	{
		ft_putchar(0xC0 | c >> 6);
		ft_putchar(0x80 | (c & 0x3F));
		return (2);
	}
	else if (c < 0x10000)
	{
		ft_putchar(0xE0 | c >> 12);
		ft_putchar(0x80 | (c >> 6 & 0x3F));
		ft_putchar(0x80 | (c & 0x3F));
		return (3);
	}
	else if (c < 0x200000)
	{
		ft_putchar(0xF0 | c >> 18);
		ft_putchar(0x80 | (c >> 12 & 0x3F));
		ft_putchar(0x80 | (c >> 6 & 0x3F));
		ft_putchar(0x80 | (c & 0x3F));
		return (4);
	}
	return (1);
}
