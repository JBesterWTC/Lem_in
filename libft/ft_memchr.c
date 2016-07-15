/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:50:41 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 15:50:42 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *haystack, int needle, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		if (needle == ((unsigned char*)haystack)[i])
			return ((void*)haystack + i);
		i++;
	}
	return (NULL);
}
