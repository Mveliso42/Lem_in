/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strichr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:31:16 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:31:18 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strichr(char *s, int c)
{
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (-1);
	i = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}
