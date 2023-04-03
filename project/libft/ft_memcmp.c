/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasik <hasik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by hasik             #+#    #+#             */
/*   Updated: 2023/01/31 12:37:50 by hasik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dizi1, const void *dizi2, size_t boyut)
{
	size_t	i;

	i = 0;
	while (i < boyut)
	{
		if (((unsigned char *)dizi1)[i] != ((unsigned char *)dizi2)[i])
			return (((unsigned char *)dizi1)[i] - ((unsigned char *)dizi2)[i]);
		i++;
	}
	return (0);
}
