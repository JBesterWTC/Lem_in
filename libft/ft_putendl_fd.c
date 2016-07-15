/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 15:54:15 by tmack             #+#    #+#             */
/*   Updated: 2016/06/05 15:54:17 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putendl_fd(char const *source, int file_descriptor)
{
	ft_putstr_fd(source, file_descriptor);
	ft_putchar_fd('\n', file_descriptor);
}
