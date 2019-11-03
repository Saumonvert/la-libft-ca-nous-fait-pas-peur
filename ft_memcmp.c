/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:52:21 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 16:01:25 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*src;

	i = 0;
	dest = (unsigned char *)s1;
	src = (unsigned const char *)s2;
	if (dest == src)
		return (0);
	while (i < (unsigned char)n)
	{
		if (dest[i] != src[i])
			return (dest[i] - src[i]);
		else
			i++;
	}
	return (0);
}
