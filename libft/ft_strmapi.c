/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:04:21 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:04:21 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	unsigned int	i;

	if (!s)
		return (0);
	buffer = (char *) malloc (ft_strlen(s) + 1);
	if (buffer == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		buffer[i] = f(i, s[i]);
		i ++;
	}
	buffer[i] = '\0';
	return (buffer);
}
