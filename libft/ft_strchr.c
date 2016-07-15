/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:58:29 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 16:06:20 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *haystack, int needle)
{
	while (*haystack && *haystack != needle)
		haystack++;
	if (*haystack == needle)
		return ((char*)haystack);
	return (NULL);
}
