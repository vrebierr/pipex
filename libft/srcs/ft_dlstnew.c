/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 14:32:42 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:49:14 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_dlst	*ft_dlstnew(const void *content, size_t content_size)
{
	t_dlst	*out;

	out = (t_dlst *)malloc(sizeof(t_dlst));
	if (!out)
		return (NULL);
	out->prev = NULL;
	out->next = NULL;
	if (content && content_size)
	{
		out->content = malloc(content_size);
		if (out->content)
			ft_memcpy(out->content, content, content_size);
	}
	else
		out->content = NULL;
	return (out);
}
