/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:07 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:12:07 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FREE_FUNCTIONS_H
# define FREE_FUNCTIONS_H
# include <stdlib.h>
# include "../incs/struct_map.h"

void	*free_matrix(char **str_array);
void	*free_map(t_map *map);

#endif /*FREE_FUNCTIONS_H*/
