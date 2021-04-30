/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:22:48 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:18:11 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*src1;
	unsigned char	*dest1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	count = 0;
	if (n <= 0)
		return (NULL);
	while (count < n)
	{
		dest1[count] = src1[count];
		if (src1[count] == (unsigned char)c)
			return ((void *)&dest[count + 1]);
		count++;
	}
	return (NULL);
}
