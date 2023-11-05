/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:34:22 by skarim            #+#    #+#             */
/*   Updated: 2023/11/03 16:51:27 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;
	size_t		lens;

	lens = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= lens)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	if (start + len > lens)
		len = lens - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
