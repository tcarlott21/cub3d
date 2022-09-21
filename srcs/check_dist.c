/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:09:26 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:09:26 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/raycast.h"

void	check_dist(t_math *math)
{
	if (math->sidedistx < math->sidedisty)
	{
		math->sidedistx += math->deltadistx;
		math->mapx += math->stepx;
		math->side = 0;
	}
	else
	{
		math->sidedisty += math->deltadisty;
		math->mapy += math->stepy;
		math->side = 1;
	}
}
