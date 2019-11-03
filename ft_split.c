/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:30:27 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/27 20:50:10 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordlen(char const *s, int i, char c)
{
	int j;

	j = i;
	while ((s[i]) && (s[i] != c))
		i++;
	return (i - j);
}

static int		count_words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char		*ft_strndup(char const *src, int n)
{
	int		i;
	char	*res;

	i = 0;
	if (!(res = (char *)malloc(sizeof(*res) * (n + 1))))
		return (NULL);
	while (src[i] && i < n)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**res;

	if (!s)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while ((s[i]) && (k < count_words(s, c)))
	{
		while ((s[i]) && s[i] == c)
			i++;
		if ((s[i]) && ((i == 0) || (s[i] != c && s[i - 1] == c)))
		{
			if (!(res[k] = ft_strndup(&s[i], ft_wordlen(s, i, c))))
				return (NULL);
			k++;
			i += ft_wordlen(s, i, c);
		}
	}
	res[((count_words(s, c) == 0) ? 0 : k)] = NULL;
	return (res);
}
