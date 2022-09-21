/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:35 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:12:35 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PARSE_MAP_H
# define PARSE_MAP_H
# include "../libft/libft.h"
# include "struct_map.h"
# include "free_functions.h"
# include "check_valid.h"
# include "correct_map_init.h"
# include "init_paths_colors.h"
# include "parse_utils.h"

t_map	*parser_map(char *path);
char	**read_file(char *file, int fd);

#endif /*PARSE_MAP_H*/
