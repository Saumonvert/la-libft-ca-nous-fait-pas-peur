/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:54:50 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/16 23:38:32 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*string;
	unsigned char	d;

	string = (char *)str;
	d = (unsigned char)c;
	while (n != 0)
	{
		*string = d;
		string++;
		n--;
	}
	return (str);
}
