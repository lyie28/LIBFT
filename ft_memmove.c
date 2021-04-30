/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:39:58 by lyie              #+#    #+#             */
/*   Updated: 2020/11/24 18:08:28 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d1;
	const unsigned char	*s1;

	if ((src == NULL && dst == NULL))
		return (dst);
	d1 = (unsigned char*)dst;
	s1 = (unsigned char*)src;
	i = (n);
	if (s1 < d1)
	{
		while (i > 0)
		{
			d1[i - 1] = s1[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
