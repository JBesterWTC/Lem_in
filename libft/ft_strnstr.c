/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 16:05:53 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 16:05:55 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		outer;
	size_t		inner;

	if (needle[0] == '\0')
		return ((char*)haystack);
	len -= ft_strlen(needle) - 1;
	outer = 0;
	while (outer < len && haystack[outer])
	{
		inner = 0;
		while ((haystack + outer)[inner] == needle[inner])
		{
			if (needle[inner + 1] == '\0')
				return ((char*)haystack + outer);
			inner++;
		}
		outer++;
	}
	return (NULL);
}
