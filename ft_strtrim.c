/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:40:37 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:42:25 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

static int	ft_checkit(const char c, const char *set)
{
	int match;
	int i;

	i = -1;
	match = 0;
	while (set[++i])
	{
		if (c == set[i])
			match = 1;
	}
	if (match == 0)
		return (1);
	return (0);
}

static int	ft_sizer(const char *str, const char *set, int *st, int *end)
{
	while (str[(*st)])
	{
		if (ft_checkit(str[(*st)], set) == 1)
			break ;
		(*st)++;
	}
	*end = ft_strlen((char *)str) - 1;
	while ((*end) >= 0)
	{
		if (ft_checkit(str[(*end)], set) == 1)
			break ;
		(*end)--;
	}
	(*end)++;
	if ((*end) == 0)
		return (1);
	return ((*end) - (*st) + 1);
}

char		*ft_strtrim(const char *s, const char *set)
{
	char	*trimmed;
	int		st;
	int		end;
	int		size;

	if ((!(s)) || (!(set)))
		return (NULL);
	st = 0;
	end = 0;
	size = ft_sizer(s, set, &st, &end);
	if (!(trimmed = malloc((sizeof(char)) * size)))
		return (NULL);
	ft_strlcpy(trimmed, (&(s[st])), size);
	return (trimmed);
}
