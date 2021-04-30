/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie <lyie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:45:38 by lyie              #+#    #+#             */
/*   Updated: 2020/11/23 19:03:38 by lyie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	while (*alst)
	{
		if ((*alst)->next == NULL)
		{
			(*alst)->next = new;
			*alst = tmp;
			return ;
		}
		*alst = (*alst)->next;
	}
	*alst = new;
	return ;
}
