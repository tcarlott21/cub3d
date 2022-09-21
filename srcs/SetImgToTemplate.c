/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SetImgToTemplate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:11:15 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:11:15 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/raycast.h"

void	setimgtotemplate(t_template *in, t_template *from, int x1, int y1)
{
	int	y;
	int	x;

	y = 0;
	while (y < from->height)
	{
		x = 0;
		while (x < from->width)
		{
			in->buffer[in->width * (int)(y + y1) + (int)(x + x1)]
				= from->buffer[y * from->width + x];
			x++;
		}
		y++;
	}
}
