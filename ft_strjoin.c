/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:30:09 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:36:39 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		size;
	int		i;
	int		j;

	if ((!(s1)) || (!(s2)))
		return (NULL);
	i = -1;
	j = -1;
	size = (ft_strlen((char *)s1)) + (ft_strlen((char *)s2));
	if (!(cat = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (s1[++i])
		cat[i] = s1[i];
	while (s2[++j])
		cat[i + j] = s2[j];
	cat[i + j] = '\0';
	return (cat);
}
