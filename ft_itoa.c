/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:27:54 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/30 15:33:40 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_itoa(long nb)
{
	int ret;

	ret = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		ret++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		ret++;
	}
	return (ret);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	i = len_itoa(nb);
	if (!(str = (char*)malloc(sizeof(str) * (i + 1))))
		return (NULL);
	str[(n == 0) ? 1 : i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}
