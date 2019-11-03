/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:36:10 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/27 20:28:06 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst && (*alst) && new)
	{
		while ((*alst)->next)
			(*alst) = (*alst)->next;
		(*alst)->next = new;
	}
	if ((*alst) == NULL && new)
		(*alst) = new;
}
