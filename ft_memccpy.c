/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:34:51 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/11 20:22:43 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;
	unsigned char	*res;
	unsigned char	d;

	i = 0;
	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	res = 0;
	d = (unsigned char)c;
	while ((i < n) && (res == 0))
	{
		dest[i] = src[i];
		if (src[i] == d)
			res = &dest[i + 1];
		i++;
	}
	return (res);
}
