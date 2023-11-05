/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:44:58 by skarim            #+#    #+#             */
/*   Updated: 2023/11/01 21:03:02 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *) src;
	if (str1 == str2)
		return (dst);
	if (str1 < str2 || str1 >= str2 + len)
	{
		while (len-- > 0)
		{
			*str1++ = *str2++;
		}
	}
	else
	{
		str1 += len - 1;
		str2 += len - 1;
		while (len-- > 0)
		{
			*str1-- = *str2--;
		}
	}
	return (dst);
}
