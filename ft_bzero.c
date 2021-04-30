/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:45:08 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:17:26 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*unsigned_str;
	size_t			count;

	unsigned_str = str;
	count = 0;
	if (n == 0)
		return ;
	while (count != n)
	{
		unsigned_str[count] = '\0';
		count++;
	}
}
