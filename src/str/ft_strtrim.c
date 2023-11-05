/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:05:52 by skarim            #+#    #+#             */
/*   Updated: 2023/11/03 18:11:57 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		end;
	int		start;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	if (!set)
		return ((char *)s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "es.teses .  .";
	char	str1[] = " .";
	printf("%s",ft_strtrim(str, str1));
}*/