/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:01:36 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:01:36 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*buffer;
	size_t	i;

	buffer = s;
	i = 0;
	while (i < n)
	{
		buffer[i] = '\0';
		i ++;
	}
}
