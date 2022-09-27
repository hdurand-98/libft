/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:01:28 by hdurand           #+#    #+#             */
/*   Updated: 2019/11/27 14:45:10 by hdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	newlist = NULL;
	temp = NULL;
	if (lst)
	{
		if (!(newlist = ft_lstnew((*f)(lst->content))))
			return (NULL);
		lst = lst->next;
	}
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, temp);
		lst = lst->next;
	}
	return (newlist);
}
