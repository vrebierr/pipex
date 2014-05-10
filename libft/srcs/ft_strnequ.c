/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:22:58 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/23 19:10:10 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 != s2)
		{
			return (0);
		}
		return (1);
	}
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	if (i < n && s1[i] != s2[i])
	{
		return (0);
	}
	return (1);
}
