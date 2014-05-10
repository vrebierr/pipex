/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <bgronon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/17 20:20:58 by bgronon           #+#    #+#             */
/*   Updated: 2014/01/17 21:24:29 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **root, t_list *branch)
{
	t_list	*out;

	out = *root;
	if (out)
	{
		while (out->next)
			out = out->next;
		out->next = branch;
	}
	else
		*root = branch;
}
