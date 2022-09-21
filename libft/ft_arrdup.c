/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:01:19 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/11 08:01:19 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_arrdup(char **array)
{
	char	**new_array;
	int		i;

	new_array = ft_calloc(ft_arrlen(array) + 1, sizeof(char *));
	if (!new_array)
		return (NULL);
	i = 0;
	while (array[i])
	{
		new_array[i] = ft_strdup(array[i]);
		if (!new_array[i])
		{
			new_array = ft_free_2d(new_array);
			return (NULL);
		}
		i ++;
	}
	return (new_array);
}
