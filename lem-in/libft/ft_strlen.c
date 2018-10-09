/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:34:18 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:34:19 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t		ft_nbrchar_wide(wchar_t *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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

size_t		ft_strwlen(wchar_t *s, int nbr_char)
{
	int	i;
	int	j;
	int	lel;

	i = 0;
	j = 0;
	lel = 0;
	while (s[i])
	{
		j += wchar_len(s[i]);
		if (j > nbr_char)
			return (lel);
		lel += wchar_len(s[i]);
		i++;
	}
	return (lel);
}

size_t		ft_strwlen_nbr(wchar_t *s, size_t nbr)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (s[i] && nbr == 0)
	{
		if (s[i] < 0x80)
			len++;
		else if (s[i] < 0x800)
			len += 2;
		else if (s[i] < 0x10000)
			len += 3;
		else if (s[i] < 0x200000)
			len += 4;
		i++;
	}
	return (len);
}
