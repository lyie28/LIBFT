/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:28:17 by lyie              #+#    #+#             */
/*   Updated: 2020/11/18 14:53:11 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	int		match;

	size = (size_t)ft_strlen((char *)big);
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	i = 0;
	while (i < len && i < size)
	{
		match = 0;
		j = 0;
		while (big[i] == little[j] && i < len && i < size)
		{
			match++;
			if (match == ft_strlen((char *)little))
				return ((char *)&big[i - j]);
			else
				j++;
			i++;
		}
		i = ((i + 1) - j);
	}
	return (0);
}
