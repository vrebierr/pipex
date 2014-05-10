/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:23:12 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/30 16:07:31 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*area;

	area = NULL;
	if (size)
	{
		area = malloc(size);
		if (area)
			ft_bzero(area, size);
	}
	return (area);
}
