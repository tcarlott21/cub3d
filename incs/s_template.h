/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_template.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:13:30 by tcarlott          #+#    #+#             */
/*   Updated: 2022/08/12 18:13:30 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef S_TEMPLATE_H
# define S_TEMPLATE_H

typedef struct s_template{
	int		height;
	int		width;
	void	*img;
	int		*buffer;
	int		pixel_bits;
	int		line_bytes;
	int		endian;
	char	*name;
}	t_template;

#endif /*S_TEMPLATE_H*/
