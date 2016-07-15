/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:34:18 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 15:40:28 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_length(int number)
{
	unsigned int	count;

	if (number == 0)
		return (1);
	number = abs(number);
	count = 0;
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

static void		write_chars(char *first, char *now, int number)
{
	while (now >= first)
	{
		*now = number % 10 + '0';
		number /= 10;
		now--;
	}
}

char			*ft_itoa(int number)
{
	char	*new;
	int		length;

	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	if (number == 0)
		return (ft_strdup("0"));
	length = count_length(number);
	new = malloc(sizeof(char) * (length + (number < 0) + 1));
	if (number < 0)
	{
		new[0] = '-';
		write_chars(new + 1, new + length, 0 - number);
		new[length + 1] = '\0';
	}
	else
	{
		write_chars(new, new + length - 1, number);
		new[length] = '\0';
	}
	return (new);
}
