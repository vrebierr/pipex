/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:00:49 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/20 10:35:34 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (cpt < n)
	{
		if (CHAR(s1, cpt) != CHAR(s2, cpt))
		{
			return (CHAR(s1, cpt) - CHAR(s2, cpt));
		}
		cpt++;
	}
	return (0);
}
