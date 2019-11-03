/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:47:55 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 16:22:50 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == '\0')
		return ((char *)big);
	n = ft_strlen(little);
	while (*big != '\0' && n <= len--)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		else
			big++;
	}
	return (NULL);
}
