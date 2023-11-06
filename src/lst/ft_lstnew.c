/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:29:34 by skarim            #+#    #+#             */
/*   Updated: 2023/11/06 10:42:03 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

int main(void)
{
	int	data = 42;
	t_list *node = ft_lstnew(&data);
	if (node)
	{
		printf("content: %d, next : %p", *((int *)(node->content)), (node->next));
	}
	free(node);
	return (0);
}*/