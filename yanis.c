/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yanis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:18:11 by yandebbo          #+#    #+#             */
/*   Updated: 2019/10/13 21:53:25 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_next_word(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i - 1);
}

static int		count_words(const char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			i = i + find_next_word(str + i, c);
			count++;
		}
		i++;
	}
	return (count);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		last;

	j = 0;
	i = 0;
	if (!str)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char*) * (count_words(str, c) + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			last = i;
			i += find_next_word(str + i, c);
			if ((tab[j] = (char*)malloc(sizeof(char) * (i - last))) == NULL)
				return (NULL);
			strncpy(tab[j++], str + last, i - last + 1);
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char** av)
{
	char **strs;
	int i = 0;

	(void)ac;
	strs = ft_strsplit(av[1], av[2][0]);
	while (strs[i])
	{
		ft_putchar(i + '0');
		ft_putstr(strs[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
*/