/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinstrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:02:20 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:02:20 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_joinstrs(char **array, char c)
{
	char	*str;
	size_t	i;

	str = ft_strdup("");
	if (!str)
		return (NULL);
	i = 0;
	while (array[i])
	{
		str = ft_stradd(str, array[i]);
		if (!str)
			return (ft_free(str), NULL);
		if (array[i + 1])
		{
			str = ft_stradd(str, &c);
			if (!str)
				return (ft_free(str), NULL);
		}
		i ++;
	}
	return (str);
}
