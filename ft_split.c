/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:30:27 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/18 19:18:42 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char const *s, int i, char c)
{
	int j;

	j = i;
	while ((s[i]) && (s[i] != c))
		i++;
	return (i - j);
}

char	*ft_strndup(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(*dest) * (n + 1))))
		return (NULL);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		count_words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**splitter(char const *s, char **res, int i, char c)
{
	int k;
	int check;

	k = 0;
	check = 1;
	while (s[i])
	{
		while ((s[i]) && (s[i] == c))
		{
			i++;
			check = 1;
		}
		if ((s[i]) && check == 1)
		{
			res[k] = ft_strndup(res[k], (char *)&s[i], ft_wordlen(s, i, c));
			k++;
			check = 0;
			i++;
		}
		else if ((s[i]) && check == 0)
			i++;
	}
	res[k] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;

	i = 0;
	if ((!s) || (!(res = malloc((sizeof(char*) * count_words(s, c)) + 1))))
		return (NULL);
	return (splitter(s, res, i, c));
}
