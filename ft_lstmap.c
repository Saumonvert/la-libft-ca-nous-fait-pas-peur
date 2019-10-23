/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:47:22 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/22 20:59:59 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(f)(void *), void (del)(void *))
{
    t_list    *list;
    list = f(lst);
    if (lst && f)
    {
        while (lst->next)
        {
            lst = lst->next;
            if (!(list->next = ft_lstnew(list)))
            {
                del(list->content);
                free (list);
                return NULL;
            }
            list = list->next;
        }
        return (list);
    }
    return NULL;
}