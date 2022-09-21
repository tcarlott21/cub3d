/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_hero.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:13:00 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:13:00 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef S_HERO_H
# define S_HERO_H

# include "s_template.h"

typedef struct s_hero{
	t_template	temp;
	double		x;
	double		y;
}	t_hero;

#endif /*S_HERO_H*/
