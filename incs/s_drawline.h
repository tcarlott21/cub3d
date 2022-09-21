/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_drawline.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:54 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:12:54 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef S_DRAWLINE_H
# define S_DRAWLINE_H

typedef struct s_drawline{
	int		x_err;
	int		y_err;
	int		dx;
	int		dy;
	int		incx;
	int		incy;
	float	x;
	float	y;
	int		d;
}	t_drawline;

#endif /*S_DRAWLINE_H*/
