/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:20:39 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:49:59 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cpt;

	cpt = 0;
	while (cpt < len)
	{
		CHAR(b, cpt) = (unsigned char)c;
		cpt++;
	}
	return (b);
}
