/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:51:56 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/12 18:06:27 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*res;

	res = (char *)str + ft_strlen(str);
	while (*res != c)
	{
		if (res == str)
			return (NULL);
		res--;
	}
	return (res);
}
