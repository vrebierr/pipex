/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:51:50 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/30 16:09:05 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*copy;

	copy = malloc(n);
	ft_memcpy(copy, s2, n);
	ft_memcpy(s1, copy, n);
	free(copy);
	return (s1);
}
