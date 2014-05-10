/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 17:16:29 by bgronon           #+#    #+#             */
/*   Updated: 2014/01/05 18:35:19 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstpush(t_dlst **root, t_dlst *branch)
{
	t_dlst	*out;

	out = *root;
	if (out && out->content)
	{
		while (out->next)
			out = out->next;
		branch->prev = out;
		out->next = branch;
	}
	else
		*root = branch;
}
