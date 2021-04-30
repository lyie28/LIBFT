/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:10:44 by lyie              #+#    #+#             */
/*   Updated: 2020/11/27 17:20:49 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "includes/libft.h"

static void	*ft_freerows(char **split, int row)
{
	int i;

	i = 0;
	while (i < row)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	ft_getlen(const char *str, char sep)
{
	int i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

static int	ft_wordcount(const char *str, char sep)
{
	int i;
	int row;

	if (!str[0])
		return (0);
	row = 0;
	i = 0;
	while ((str[i]) && str[i] == sep)
		i++;
	while (str[i])
	{
		if (str[i] == sep)
		{
			row++;
			i++;
			while ((str[i]) && str[i] == sep)
				i++;
		}
		else
			i++;
	}
	if (str[i - 1] != sep)
		row++;
	return (row);
}

static char	**ft_fill(const char *str, char sep, char **split, int wc)
{
	int len;
	int row;
	int i;

	i = 0;
	row = 0;
	while (row < wc)
	{
		if (str[i] != sep)
		{
			len = (ft_getlen(&(str[i]), sep));
			if (!(split[row] = malloc(sizeof(char) * (len + 1))))
				return (ft_freerows(split, row));
			ft_strlcpy(split[row], (const char *)&(str[i]), (len + 1));
			row++;
			i = i + len - 1;
		}
		i++;
	}
	split[wc] = NULL;
	return (split);
}

char		**ft_split(const char *s, char c)
{
	int		wc;
	char	**split;

	if (!(s))
		return (NULL);
	wc = ft_wordcount(s, c);
	if (!(split = malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	if (!(split = ft_fill(s, c, split, wc)))
		return (NULL);
	return (split);
}
