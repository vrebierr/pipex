/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:55:30 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/20 18:25:37 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	if (ft_strlen(s2) == 0)
	{
		return ((char *)s1);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s2[j] != '\0' && s1[i + j] == s2[j])
			{
				j++;
			}
			if (s2[j] == '\0')
			{
				return (&(((char *)s1)[i]));
			}
		}
		i++;
	}
	return (NULL);
}
