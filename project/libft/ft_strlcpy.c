/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasik <hasik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:37:00 by hasik             #+#    #+#             */
/*   Updated: 2023/01/31 11:37:00 by hasik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	x;

	x = 0;
	if (n > 0)
	{
		while (src [x] != '\0' && x < (n - 1))
		{
			dst[x] = src [x];
			x++;
		}
		dst[x] = 0;
	}
	while (src[x])
		x++;
	return (x);
}
