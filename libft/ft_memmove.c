/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:02:42 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:02:42 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		source = src;
		dest = dst;
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		source = src + len - 1;
		dest = dst + len - 1;
		while (len--)
			*dest-- = *source--;
	}
	return (dst);
}
