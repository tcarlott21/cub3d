/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:02:26 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:02:26 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*buffer;
	size_t		i;

	buffer = s;
	i = 0;
	while (i < n)
	{
		if ((i > 0 && !(unsigned char)buffer[i])
			|| (unsigned char)buffer[i] == (unsigned char)c)
			return ((void *)&buffer[i]);
		i ++;
	}
	return (0);
}
