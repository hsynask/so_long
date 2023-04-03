/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasik <hasik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:36:28 by hasik             #+#    #+#             */
/*   Updated: 2023/01/31 11:36:28 by hasik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (c > 255)
		c -= 256;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return ((char *)(str + i));
		i++;
	}
	if (*(str + i) == c)
		return ((char *)str + i);
	return (NULL);
}
