/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:39 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/23 21:46:19 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t		cpt;

	cpt = 0;
	while (cpt < n)
	{
		CHAR(s1, cpt) = CHAR(s2, cpt);
		if (CHAR(s2, cpt) == (unsigned char)c)
			return ((void *)(((unsigned char *)s1) + cpt + 1));
		cpt++;
	}
	return (NULL);
}
