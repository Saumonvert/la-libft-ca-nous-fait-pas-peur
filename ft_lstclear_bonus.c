/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:34:41 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 16:47:12 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*temp;

	if (!lst)
		return ;
	list = *lst;
	while (list != NULL)
	{
		temp = list;
		ft_lstdelone(temp, del);
		list = list->next;
	}
	*lst = NULL;
}
