/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:03:28 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:03:28 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

char	*ft_stradd(char const *s1, char const *s2)
{
	char	*buffer;

	if (!s1)
		return (0);
	buffer = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (buffer == NULL)
		return (0);
	ft_strcpy(buffer, s1);
	ft_strcat(buffer, s2);
	free((void *)s1);
	return (buffer);
}
