/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:39:07 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 16:05:58 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	d;
	char			*str2;

	i = 0;
	d = (unsigned char)c;
	str2 = (char*)str;
	while (str2[i] != d)
	{
		if (str2[i] == '\0')
			return (NULL);
		i++;
	}
	return (&str2[i]);
}
