/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:58:05 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 15:58:07 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *first, const char *second)
{
	char	*end;

	end = ft_strchr(first, '\0');
	while (*second)
		*end++ = *second++;
	*end = '\0';
	return (first);
}
