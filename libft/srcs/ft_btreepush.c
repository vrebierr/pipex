/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreepush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <bgronon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 18:16:37 by bgronon           #+#    #+#             */
/*   Updated: 2014/01/23 19:14:25 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btreepush(t_btree **root, t_btree *branch,
			int (*fn)(void *, void *))
{
	if (*root)
	{
		if (fn((*root)->content, branch->content) == -1)
			ft_btreepush(&(*root)->left, branch, fn);
		else
			ft_btreepush(&(*root)->right, branch, fn);
	}
	else
		*root = branch;
}
