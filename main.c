/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:05:03 by othabchi          #+#    #+#             */
/*   Updated: 2019/10/10 21:18:01 by othabchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//void    ft_memset(void, int, size_t);

int        main(int ac, char **av)
{
    (void)av;
    (void)ac;
/*    char    str[] = "titi";
    char    stra[] = "titi";
    char    strs[] = "titi";
    char    strd[] = "titi";
    char    strf[] = "titi";
    char    strg[] = "titi";
    char    strh[] = "titi";
    char    strj[] = "titi";
    char    strq[] = "titi";
    char    strw[] = "titi";
    char    stre[] = "titi";
    char    strr[] = "titi";
    char    strt[] = "titi";
    char    stry[] = "titi";
    char    stru[] = "titi";
    char    str2[] = "tovo";
    char    str3[] = "tutu";
    char    str4[] = "tototutu";
    char    str5[] = "";
    char    str6[] = "1234";
    char    *str7 = NULL;
    char    *str1 = " ";
    char    *str2 = "/n";
    char    *str3 = NULL;
    int        n = 0;
    printf("%i\n", ft_strlen(str));
    printf("%i\n", ft_strlen(str1));
    printf("%i\n", ft_strlen(str2));
    printf("%i\n", ft_strlen(str3));
    printf("%s\n", ft_strchr(str, 0));
    printf("%s\n", strchr(str, 0));
    printf("%s\n", ft_strchr(str, -9));
    printf("%s\n", strchr(str, -9));
    printf("%s\n", ft_strchr(str, 53));
    printf("%s\n", strchr(str, 53));
    printf("%s\n", ft_strchr(str, 123));
    printf("%s\n", strchr(str, 123));
    printf("%s\n", ft_memset(str2, 'X', 10));
    printf("%s\n", memset(str2, 'X', 10));
    printf("%s\n", ft_memset(str3, 'X', 0));
    printf("%s\n", memset(str3, 'X', 0));
    printf("%s\n", ft_memset(str4, 'X', 1000));
    printf("%s\n", memset(str4, 'X', 1000));
    printf("%s\n", ft_memset(str5, 'X', -5));
    printf("%s\n", memset(str5, 'X', -5));

    printf("%s\n", ft_memcpy(str, str2, 3));
    printf("m %s\n", memcpy(stra, str2, 3));
    printf("%s\n", ft_memcpy(strq, str2, 0));
    printf("m %s\n", memcpy(strs, str2, 0));
    printf("%s\n", ft_memcpy(stre, str2, 5));
    printf("m %s\n", memcpy(strd, str2, 5));
    printf("%s\n", ft_memcpy(strr, str4, 3));
    printf("m %s\n", memcpy(strf, str4, 3));
    printf("%s\n", ft_memcpy(stru, str7, 0));
    printf("m %s\n", memcpy(strj, str7, 0));

    printf("%s\n", ft_memccpy(stra, str2, 'o', 0));
    printf("m %s\n", memccpy(str, str2, 'o', 0));
    printf("%s\n", ft_memccpy(strs, str2, 'o', 2));
    printf("m %s\n", memccpy(strq, str2, 'o', 2));
    printf("%s\n", ft_memccpy(strd, str2, 'o', 3));
    printf("m %s\n", memccpy(strw, str2, 'o', 3));
    printf("%s\n", ft_memccpy(strf, str2, 'o', 5));
    printf("m %s\n", memccpy(stre, str2, 'o', 5));

    printf("results : mine %s real %s\n", stra, str);
    printf("results : mine %s real %s\n", strs, strq);
    printf("results : mine %s real %s\n", strd, strw);
    printf("results : mine %s real %s\n", strf, stre);
	printf("results : mine %s real %s\n", stru, strj);
*/
    char str1[] = "helloo";
    char str2[] = "cava";
    printf("%s", ft_strjoin(str1, str2));
    return (0);
}

