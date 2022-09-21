/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_keyboard_no_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:09:05 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:09:05 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/s_win.h"
#include "../incs/parse_map.h"
#include <math.h>
#include "../incs/draw_all.h"
#include "../mlx123/mlx.h"

static void	button_s_w(int key, t_win *win)
{
	if (key == KEY_S)
	{
		if (win->maps->all_map[(int)(win->player.posx - win->player.dirx
				* win->player.movespeed)][(int)(win->player.posy)] != '1')
			win->player.posx -= win->player.dirx * win->player.movespeed;
		if (win->maps->all_map[(int)(win->player.posx)][(int)(win->player.posy
			- win->player.diry * win->player.movespeed)] != '1')
			win->player.posy -= win->player.diry * win->player.movespeed;
	}
	if (key == KEY_W)
	{
		if (win->maps->all_map[(int)(win->player.posx + win->player.dirx
				* win->player.movespeed)][(int)win->player.posy] != '1')
			win->player.posx += win->player.dirx * win->player.movespeed;
		if (win->maps->all_map[(int)win->player.posx][(int)(win->player.posy
			+ win->player.diry * win->player.movespeed)] != '1')
			win->player.posy += win->player.diry * win->player.movespeed;
	}
}

static void	button_d_a(int key, t_win *win)
{
	if (key == KEY_D)
	{
		if (win->maps->all_map[(int)(win->player.posx + (win->player.planex
					* win->player.movespeed))][(int)(win->player.posy)] != '1')
			win->player.posx += win->player.planex * win->player.movespeed;
		if (win->maps->all_map[(int)(win->player.posx)][(int)(win->player.posy
				+ (win->player.planey * win->player.movespeed))] != '1')
			win->player.posy += win->player.planey * win->player.movespeed;
	}
	if (key == KEY_A)
	{
		if (win->maps->all_map[(int)(win->player.posx - (win->player.planex
					* win->player.movespeed))][(int)(win->player.posy)] != '1')
			win->player.posx -= win->player.planex * win->player.movespeed;
		if (win->maps->all_map[(int)(win->player.posx)][(int)(win->player.posy
				- (win->player.planey * win->player.movespeed))] != '1')
			win->player.posy -= win->player.planey * win->player.movespeed;
	}
}

static void	button_left(int key, t_win *win)
{
	double	olddirx;
	double	oldplanex;

	olddirx = win->player.dirx;
	oldplanex = win->player.planex;
	if (key == KEY_LEFT)
	{
		win->player.dirx = win->player.dirx * cos(win->player.rotspeed)
			- win->player.diry * sin(win->player.rotspeed);
		win->player.diry = olddirx * sin(win->player.rotspeed)
			+ win->player.diry * cos(win->player.rotspeed);
		win->player.planex = win->player.planex * cos(win->player.rotspeed)
			- win->player.planey * sin(win->player.rotspeed);
		win->player.planey = oldplanex * sin(win->player.rotspeed)
			+ win->player.planey * cos(win->player.rotspeed);
	}
}

static void	button_right(int key, t_win *win)
{
	double	olddirx;
	double	oldplanex;

	olddirx = win->player.dirx;
	oldplanex = win->player.planex;
	if (key == KEY_RIGHT)
	{
		win->player.dirx = win->player.dirx * cos(-win->player.rotspeed)
			- win->player.diry * sin(-win->player.rotspeed);
		win->player.diry = olddirx * sin(-win->player.rotspeed)
			+ win->player.diry * cos(-win->player.rotspeed);
		win->player.planex = win->player.planex * cos(-win->player.rotspeed)
			- win->player.planey * sin(-win->player.rotspeed);
		win->player.planey = oldplanex * sin(-win->player.rotspeed)
			+ win->player.planey * cos(-win->player.rotspeed);
	}
}

int	pressbutton_no_bonus(int key, t_win *win)
{
	button_s_w(key, win);
	button_d_a(key, win);
	button_right(key, win);
	button_left(key, win);
	if (key == 53)
	{
		mlx_destroy_window(win->mlx, win->win);
		free_map(win->maps);
		exit(0);
	}
	drawall_no_bonus(win);
	return (0);
}
