/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:11:13 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/20 09:47:41 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		cpt;

	cpt = 0;
	while (cpt < n)
	{
		CHAR(s1, cpt) = CHAR(s2, cpt);
		cpt++;
	}
	return (s1);
}
