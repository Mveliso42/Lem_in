/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:34:44 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:34:45 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if ((str = malloc(sizeof(char) * s_len + 1)) == NULL)
		return (NULL);
	while (i != s_len)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
