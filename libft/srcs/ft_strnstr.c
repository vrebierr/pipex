/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:29:21 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/26 09:28:47 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] == s1[i + j] && (j + i) < n)
				j++;
			if (s2[j] == '\0')
				return (&(((char *)s1)[i]));
		}
		i++;
	}
	return (NULL);
}
