/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:41:55 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 16:14:39 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(str1 + i) && *(str1 + i) == *(str2 + i) && i < n - 1)
		i++;
	if (n > 0)
		return (*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
	return (0);
}
