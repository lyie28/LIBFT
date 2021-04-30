/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:39:22 by lyie              #+#    #+#             */
/*   Updated: 2020/11/26 13:19:33 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (!(str))
		return ;
	write(fd, str, ft_strlen(str));
	write(fd, "\n", 1);
}
