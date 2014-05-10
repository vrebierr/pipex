/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:51:40 by bgronon           #+#    #+#             */
/*   Updated: 2013/12/12 19:26:12 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_lstnewnode(t_list *lst)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (lst)
	{
		new->content = NULL;
		new->content_size = 0;
		if (lst->content)
		{
			new->content = malloc(lst->content_size);
			if (new->content)
				ft_memcpy(new->content, lst->content, lst->content_size);
			new->content_size = lst->content_size;
		}
		new->next = lst->next;
	}
	return (new);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;

	copy = NULL;
	if (lst)
	{
		copy = ft_lstnewnode(f(lst));
		if (!copy)
			return (NULL);
		if (lst->next)
			copy->next = ft_lstmap(lst->next, f);
	}
	return (copy);
}
