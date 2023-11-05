/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:36:17 by skarim            #+#    #+#             */
/*   Updated: 2023/11/05 16:45:54 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	res;
	int				count;

	res = 0;
	sign = 1;
	count = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if (res)
			count++;
		str++;
	}
	if (res > LONG_MAX || count > 20)
		return (ft_check(sign));
	return (res * sign);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n%d", ft_atoi("+8998"), atoi("+8998"));
	return (0);
}*/