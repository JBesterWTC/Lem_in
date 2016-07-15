/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 16:03:49 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 16:03:51 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *first, const char *second, size_t len)
{
	char	*end;
	size_t	i;

	end = ft_strchr(first, '\0');
	i = 0;
	while (second[i] && i < len)
	{
		end[i] = second[i];
		i++;
	}
	end[i] = '\0';
	return (first);
}
