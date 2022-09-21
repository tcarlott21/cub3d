/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:18 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:12:18 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INIT_H
# define INIT_H

# include "s_win.h"

void	player_init(t_win *win, char **argv);
void	vector_init(t_win *win);
int		destroy(t_win *win);

#endif /*INIT_H*/
