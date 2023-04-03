/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasik <hasik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by hasik             #+#    #+#             */
/*   Updated: 2023/01/31 12:36:44 by hasik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t countbyte)
{
	void	*p;

	p = malloc(count * countbyte);
	if (!p)
		return (0);
	ft_bzero(p, count * countbyte);
	return (p);
}
