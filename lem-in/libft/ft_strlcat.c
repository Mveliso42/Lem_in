/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmtana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 02:34:06 by mmtana            #+#    #+#             */
/*   Updated: 2018/09/23 02:34:08 by mmtana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	char	*dst_end;

	src_len = ft_strlen(src);
	dst_end = ft_memchr(dst, '\0', size);
	if (!dst_end)
		return (size + src_len);
	dst_len = dst_end - dst;
	if (!ft_memccpy(dst_end, src, 0, size - dst_len - 1))
		dst[size - 1] = '\0';
	return (dst_len + src_len);
}
