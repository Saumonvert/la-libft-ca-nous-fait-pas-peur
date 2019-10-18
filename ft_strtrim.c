/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:06:33 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/17 19:04:10 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*newstr(char *str, int i, int j, int k)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(str) - k) + 1)))
		return (NULL);
	k = 0;
	while (i != j + 1)
	{
		new[k] = str[i];
		k++;
		i++;
	}
	new[k] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*new;

	if ((s1 == '\0') || ((s1 == '\0') && (set == '\0')))
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while ((s1[i]) && ft_check(s1[i], set) == 1)
	{
		k++;
		i++;
	}
	while ((s1[j]) && ft_check(s1[j], set) == 1)
	{
		if (s1[i] == '\0')
			break ;
		k++;
		j--;
	}
	new = newstr((char *)s1, i, j, k);
	return (new);
}
