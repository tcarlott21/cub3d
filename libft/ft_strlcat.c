/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:04:03 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:04:03 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && i + dst_len < dstsize - 1)
		{
			dst[i + dst_len] = src[i];
			i ++;
		}
		if (i > 0)
			dst[i + dst_len] = '\0';
	}
	if (dstsize >= dst_len)
		return (dst_len + src_len);
	else
		return (src_len + dstsize);
}
