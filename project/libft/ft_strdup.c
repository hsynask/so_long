/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasik <hasik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by hasik             #+#    #+#             */
/*   Updated: 2023/01/31 12:38:38 by hasik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*final;
	int		i;

	i = 0;
	final = (char *) malloc(ft_strlen(s1) + 1);
	if (!final)
		return (0);
	while (*(s1 + i))
	{
		*(final + i) = *(s1 + i);
		i++;
	}
	*(final + i) = 0;
	return (final);
}
