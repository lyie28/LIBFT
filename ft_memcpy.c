/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:18:14 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:18:55 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*unsigned_dest;
	const unsigned char	*unsigned_src;
	size_t				count;

	count = 0;
	unsigned_dest = dest;
	unsigned_src = src;
	if (n <= 0 || (src == NULL && dest == NULL))
		return (dest);
	while (count != n)
	{
		unsigned_dest[count] = unsigned_src[count];
		count++;
	}
	return (dest);
}
