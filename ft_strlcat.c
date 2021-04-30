/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:41:07 by lyie              #+#    #+#             */
/*   Updated: 2020/11/24 18:59:29 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stddef.h>

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t j;
	size_t ds;
	size_t ss;

	ss = (ft_strlen((char *)src));
	j = 0;
	if (size == 0)
		return (ss);
	ds = (ft_strlen(dest));
	if (ds > size)
		return (ss + size);
	while (src[j] && (ds + j) < size - 1)
	{
		dest[ds + j] = src[j];
		j++;
	}
	dest[ds + j] = '\0';
	return (ds + ss);
}
