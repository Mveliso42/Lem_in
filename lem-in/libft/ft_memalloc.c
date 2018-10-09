/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:22:24 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:22:26 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*s;

	s = malloc(sizeof(void *) * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
