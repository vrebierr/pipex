/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:10:39 by bgronon           #+#    #+#             */
/*   Updated: 2013/12/17 12:18:12 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	aux_lstdel(t_list *alst, void (*del)(void *, size_t))
{
	if (alst)
	{
		aux_lstdel(alst->next, del);
		ft_lstdelone(&alst, del);
	}
}

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	aux_lstdel(*alst, del);
	*alst = NULL;
}
