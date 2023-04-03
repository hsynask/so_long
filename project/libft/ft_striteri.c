/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasik <hasik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by hasik             #+#    #+#             */
/*   Updated: 2023/01/31 12:38:42 by hasik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*ft_func)(unsigned int, char*))
{
	unsigned int	index;

	if (str)
	{
		index = 0;
		while (*str)
			ft_func(index++, str++);
	}
}
