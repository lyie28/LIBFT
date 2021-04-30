/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:19:25 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:19:05 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*unsigned_str;
	size_t			count;

	count = 0;
	unsigned_str = str;
	if (n <= 0)
		return (str);
	while (count != n)
	{
		unsigned_str[count] = (unsigned char)c;
		count++;
	}
	return (str);
}
