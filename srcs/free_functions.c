/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:10:08 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:10:08 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/free_functions.h"

void	*free_matrix(char **str_array)
{
	int	i;

	i = 0;
	while (str_array && str_array[i])
		free(str_array[i++]);
	if (str_array)
		free(str_array);
	return (0);
}

void	*free_map(t_map *map)
{
	if (map->north)
		free(map->north);
	if (map->south)
		free(map->south);
	if (map->west)
		free(map->west);
	if (map->east)
		free(map->east);
	if (map->all_map)
		free_matrix(map->all_map);
	free(map);
	return (0);
}
