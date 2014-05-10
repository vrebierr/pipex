/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:55:26 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/30 16:10:41 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		cpt;

	copy = (char *)malloc(sizeof(*s1) * ft_strlen(s1) + 1);
	if (copy)
	{
		cpt = 0;
		while (s1[cpt] != '\0')
		{
			copy[cpt] = s1[cpt];
			cpt++;
		}
		copy[cpt] = '\0';
	}
	return (copy);
}
