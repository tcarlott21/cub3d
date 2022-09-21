/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_paths_colors.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:13 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:12:13 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INIT_PATHS_COLORS_H
# define INIT_PATHS_COLORS_H
# include "parse_map.h"

int	init_path(t_map *map, char **full);
int	pull_colors(t_map *map, char **str_array, int last, int i);
int	paths_colors(t_map *map, char **full, int i);
int	errors_paths_colors(int num, char **str_array1, char **str_array2);
int	check_second_arg(char **str_array);

#endif /*INIT_PATHS_COLORS_H*/
