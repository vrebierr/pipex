/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:22:32 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:49:48 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cpt;
	void	*res;

	cpt = 0;
	res = NULL;
	while (cpt < n && !res)
	{
		if (CHAR(s, cpt) == (unsigned char)c)
			res = &(CHAR(s, cpt));
		cpt++;
	}
	return (res);
}
