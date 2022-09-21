/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_keyboard.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:11:40 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:11:40 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUTTON_KEYBOARD_H
# define BUTTON_KEYBOARD_H

# include "s_win.h"

int	pressbutton(int key, t_win *win);
int	pressbutton_no_bonus(int key, t_win *win);

#endif /*BUTTON_KEYBOARD_H*/
