/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:27:01 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:27:03 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void		ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}

void		ft_putwstr(wchar_t const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putwchar(s[i]);
		i++;
	}
}

static int	wchar_len(wchar_t c)
{
	if (c < 0x80)
		return (1);
	else if (c < 0x800)
		return (2);
	else if (c < 0x10000)
		return (3);
	else if (c < 0x200000)
		return (4);
	return (1);
}

int			ft_putwstr_len(wchar_t const *s, int len)
{
	int	i;
	int	j;
	int lel;

	i = 0;
	j = 0;
	lel = 0;
	while (s[i])
	{
		j += wchar_len(s[i]);
		if (j > len)
			return (lel);
		lel += ft_putwchar(s[i]);
		i++;
	}
	return (lel);
}
