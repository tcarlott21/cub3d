/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:41 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:12:41 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PARSE_UTILS_H
# define PARSE_UTILS_H
# include "../libft/libft.h"

int		rgb_to_int(int *rgb);
int		count_lines(char **str);
int		is_digit_space(char *str);
char	*ft_charjoin(char *s1, char symbol);
int		check_filename(char *filename);

#endif /*PARSE_UTILS_H*/
