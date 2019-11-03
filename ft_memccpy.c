/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:34:51 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 15:57:53 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char*)dest;
	s = (unsigned const char *)src;
	while (i < n && (i == 0 || s[i - 1] != (unsigned char)c))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == (unsigned char)c)
		return (d + i);
	else
		return (NULL);
}
