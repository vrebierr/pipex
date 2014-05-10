/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:04:16 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/30 11:53:09 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->next = NULL;
	if (content)
	{
		lst->content = malloc(content_size);
		if (lst->content)
		{
			ft_memcpy(lst->content, content, content_size);
		}
		lst->content_size = content_size;
	}
	else
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	return (lst);
}
