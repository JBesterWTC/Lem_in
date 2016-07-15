/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 13:07:52 by jbester           #+#    #+#             */
/*   Updated: 2016/07/15 13:14:52 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int	check_room(char *line)
{
	char	**new;
	int		i;
	int		c;

	new = ft_strsplit(line);
	i = 0;
	c = 0;
	while (new[c])
	{
		if (new[c][i] == ' ')
			c++;
	}
}
