/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:31:18 by jbester           #+#    #+#             */
/*   Updated: 2016/07/15 13:04:11 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LEM_H__
# define __LEM_H__
# include <unistd.h>
# include "libft.h"

typedef struct	s_given
{
	int	anbr;
}				t_given;

typedef struct	s_room
{
	char			*name;
	int				x_co;
	int				y_co;
	int				visited;
	struct s_room	*next;
}				t_room;

#endif
