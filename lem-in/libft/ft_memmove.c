/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:23:56 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:23:58 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	void	*tmp;

	if (((tmp = malloc(sizeof(unsigned char) * len)) == NULL))
		return (dst);
	i = 0;
	j = ft_strlen(src);
	if (len == 0)
		return (dst);
	while (i < len && i != j)
	{
		((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)tmp)[i];
		i++;
	}
	return (dst);
}
