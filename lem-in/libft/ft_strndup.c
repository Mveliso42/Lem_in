/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:36:08 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:36:10 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, int n)
{
	char	*s2;
	size_t	i;

	if (!(s2 = malloc(sizeof(char) * n + 1)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < (unsigned int)n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
