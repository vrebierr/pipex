/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 15:13:11 by bgronon           #+#    #+#             */
/*   Updated: 2014/01/05 17:15:44 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_dlstdel(t_dlst **lst)
{
	t_dlst	*tmp;

	while (*lst)
	{
		tmp = *lst;
		if ((*lst)->next)
			*lst = (*lst)->next;
		tmp = NULL;
		free(tmp);
	}
}
