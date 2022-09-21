/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:09:47 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:09:47 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../mlx123/mlx.h"
#include "../incs/s_win.h"
#include "../incs/free_functions.h"

int	destroy(t_win *win)
{
	mlx_destroy_window(win->mlx, win->win);
	free_map(win->maps);
	exit(0);
}
