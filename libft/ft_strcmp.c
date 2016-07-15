/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:59:21 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 15:59:23 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcmp(const char *first, const char *second)
{
	while (*first && *second && *first == *second)
	{
		first++;
		second++;
	}
	return ((unsigned char)*first - (unsigned char)*second);
}
