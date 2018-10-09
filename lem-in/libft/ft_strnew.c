/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:36:46 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:37:03 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*s;

	if ((s = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
