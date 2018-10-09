/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_conc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:28:01 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:28:02 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_split_conc(char *str, char c)
{
	char	**tmp;
	int		i;

	i = 1;
	tmp = ft_strsplit(str, c);
	free(str);
	str = ft_strdup(tmp[0]);
	while (tmp[i])
	{
		str = ft_strjoin_free1(str, tmp[i]);
		i++;
	}
	free(tmp);
	return (str);
}
