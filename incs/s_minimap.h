/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_minimap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:13:20 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:13:20 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef S_MINIMAP_H
# define S_MINIMAP_H

# include "s_template.h"

typedef struct s_minimap{
	t_template	map;
	t_template	minimap;
	t_template	wall;
	t_template	floor;
	t_template	transparent;
}	t_minimap;

#endif /*S_MINIMAP_H*/
