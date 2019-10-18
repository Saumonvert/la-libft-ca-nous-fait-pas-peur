/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:52:19 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/16 23:11:10 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char tmp[n];

	if (!dest && !src)
		return (NULL);
	if (n < 65535)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
		return (dest);
	}
	return (0);
}
