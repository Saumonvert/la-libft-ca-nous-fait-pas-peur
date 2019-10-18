/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:56:54 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/18 21:41:38 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = malloc(size * nitems)))
		return (NULL);
	while(res[i])
	{
		res[i] = 0;
		i++;
	}
	return (res);
}