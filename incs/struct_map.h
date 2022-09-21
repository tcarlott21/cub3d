/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_map.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:13:41 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:13:41 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef STRUCT_MAP_H
# define STRUCT_MAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "s_img.h"
# include "all_define.h"

typedef struct s_map{
	char	**all_map;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	int		floor_rgb;
	int		ceil_rgb;
	int		width;
	int		height;
	double	x;
	double	y;
	char	direction;
	int		last_line;
}	t_map;

#endif /*STRUCT_MAP_H*/
