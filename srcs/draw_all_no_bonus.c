/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_all_no_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:09:52 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:09:52 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../mlx123/mlx.h"
#include"../incs/raycast.h"
#include "../incs/minimap_bonus.h"

void	drawall_no_bonus(t_win *win)
{
	mlx_clear_window(win->mlx, win->win);
	raycast(win, &win->player);
	mlx_put_image_to_window(win->mlx, win->win, win->temp.img, 0, 0);
}
