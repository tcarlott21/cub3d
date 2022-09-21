/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_map_init.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:11:51 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:11:51 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CORRECT_MAP_INIT_H
# define CORRECT_MAP_INIT_H
# include "../incs/parse_map.h"
# include "../incs/check_valid.h"

int		find_biggest_line(char **map);
char	**correct_map(char **map, int i);
int		count_str(char **strs);
char	**str_array_dup(char **strs, int start, int finish);

#endif /*CORRECT_MAP_INIT_H*/
