/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 16:03:20 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 16:03:30 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *string
							, char (*func)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = malloc(sizeof(char) * ft_strlen(string));
	i = 0;
	while (string[i])
	{
		new[i] = func(i, string[i]);
		i++;
	}
	return (new);
}
