/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:07:33 by skarim            #+#    #+#             */
/*   Updated: 2023/11/06 20:08:25 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*res;
	t_list	*tmp;

	res = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		tmp = ft_lstnew(NULL);
		if (tmp == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		ft_lstadd_back(&res, tmp);
		lst = lst->next;
	}
	return (res);
}
