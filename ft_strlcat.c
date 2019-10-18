/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:31:33 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/13 21:32:17 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	while ((dest[i] != '\0') && (i < size))
		i++;
	while ((src[j] != '\0') && (i < size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if ((size != 0) && (size >= destlen))
		dest[i] = '\0';
	if (size < (ft_strlen(dest)))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + destlen);
}
