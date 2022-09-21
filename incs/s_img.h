/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_img.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:13:06 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:13:06 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef S_IMG_H
# define S_IMG_H

typedef struct s_img{
	double	posx;
	double	dirx;
	double	planex;
	double	planey;
	double	diry;
	double	posy;
	double	time;
	double	oldtime;
	double	movespeed;
	double	rotspeed;
}	t_img;

#endif /*S_IMG_H*/
