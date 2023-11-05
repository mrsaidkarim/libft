/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:16:07 by skarim            #+#    #+#             */
/*   Updated: 2023/11/04 12:31:31 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		count;
	long	m;

	m = n;
	count = 0;
	if (m <= 0)
	{
		count = 1;
		m = -m;
	}
	while (m > 0)
	{
		m /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	long	m;
	char	*res;

	count = ft_count(n);
	m = n;
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	res[count--] = '\0';
	if (m < 0)
	{
		m = -m;
		res[0] = '-';
	}
	if (m == 0)
		res[0] = '0';
	while (m > 0)
	{
		res[count--] = (m % 10) + 48;
		m = m / 10;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s", ft_itoa(35ll));
	return (0);
}*/