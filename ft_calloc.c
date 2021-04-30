/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:19:27 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:17:40 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*memory;

	i = 0;
	if (!(memory = malloc(size * count)))
		return (NULL);
	while (i < (count * size))
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
