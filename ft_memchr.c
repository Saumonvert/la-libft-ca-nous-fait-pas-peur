/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:52:15 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/11 17:36:56 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	d;

	str = (unsigned char *)s;
	d = (unsigned char)c;
	while (n != 0)
	{
		if (*str != d)
			str++;
		else
			return (str);
		n--;
	}
	return (0);
}
