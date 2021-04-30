/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:37:35 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:37:11 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*finalstr;
	size_t	i;

	if (!(s))
		return (NULL);
	if ((int)start >= ft_strlen((char *)s))
		len = 0;
	else if ((ft_strlen((char *)&s[start])) < (int)len)
		len = ft_strlen((char *)&s[start]) + 1;
	if (!(finalstr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len && (s[start + i]))
	{
		finalstr[i] = s[start + i];
		i++;
	}
	finalstr[i] = '\0';
	return (finalstr);
}
