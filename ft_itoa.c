/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:08:26 by lyie              #+#    #+#             */
/*   Updated: 2020/11/19 14:05:02 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>
#include <limits.h>

int		ft_count(int n, int *count)
{
	if (n > 0)
	{
		*(count) = (*(count) + 1);
		ft_count((n / 10), count);
	}
	return (*count);
}

int		ft_signmin(int *sign, int *min, int *n)
{
	int start_count;

	*sign = ((*n < 0) ? 1 : 0);
	*min = ((*n == INT_MIN) ? 1 : 0);
	*n = ((*n == INT_MIN) ? (*n + 1) : *n);
	*n = (*sign == 1 ? (*n * -1) : *n);
	start_count = *sign;
	return (start_count);
}

char	*ft_itoa(int n)
{
	int		count;
	int		sign;
	int		min;
	int		i;
	char	*str;

	count = (ft_signmin(&sign, &min, &n));
	i = -1;
	if (n == 0)
		count++;
	else
		ft_count(n, &count);
	if (!(str = malloc((sizeof(char) * count + 1))))
		return (0);
	while (++i < (count + 1))
	{
		str[count - (i + 1)] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == 1)
		str[0] = '-';
	if (min == 1)
		str[count - 1]++;
	str[count] = '\0';
	return (str);
}
