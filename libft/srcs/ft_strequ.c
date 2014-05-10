/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:13:31 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/23 17:47:10 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 != s2)
		{
			return (0);
		}
		return (1);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	if (s2[i] != s1[i])
	{
		return (0);
	}
	return (1);
}
