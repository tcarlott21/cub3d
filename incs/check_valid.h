/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:11:46 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:11:46 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHECK_VALID_H
# define CHECK_VALID_H
# include "../incs/parse_map.h"

int	check_valid(t_map *map, int i, int j, int check);
int	check_path(t_map *map);
int	is_digit_space(char *str);

#endif /*CHECK_VALID_H*/
