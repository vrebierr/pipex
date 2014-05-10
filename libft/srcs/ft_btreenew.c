/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreenew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <bgronon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 18:12:00 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:49:02 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_btree		*ft_btreenew(void const *content, size_t content_size)
{
	t_btree	*out;

	out = (t_btree *)malloc(sizeof(t_btree));
	if (!out)
		return (NULL);
	out->dad = NULL;
	out->left = NULL;
	out->right = NULL;
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
