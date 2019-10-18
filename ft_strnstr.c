/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:47:55 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/17 16:26:57 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, const char *little, size_t n)
{
	size_t i;
	size_t j;
	size_t k;
	size_t len;

	i = 0;
	j = 0;
	len = ft_strlen(little);
	if (little == '\0')
		return ((char *)big);
	while ((big[i]) && (i + len <= n))
	{
		j = 0;
		k = i;
		while (big[k] && little[j] && big[k] == little[j])
		{
			k++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
