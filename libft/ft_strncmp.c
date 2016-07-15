/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 16:04:10 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 16:04:11 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *first, const char *second, size_t max)
{
	size_t		i;

	i = 0;
	while (i < max && first[i] && second[i] && first[i] == second[i])
		i++;
	if (i == max)
		return (0);
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
