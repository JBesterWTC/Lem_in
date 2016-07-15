/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 16:07:05 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 16:07:08 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t		inner;

	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		inner = 0;
		while (haystack[inner] == needle[inner])
		{
			if (needle[inner + 1] == '\0')
				return ((char*)haystack);
			inner++;
		}
		haystack++;
	}
	return (NULL);
}
