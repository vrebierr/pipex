/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 23:05:01 by bgronon           #+#    #+#             */
/*   Updated: 2013/12/19 15:47:11 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fillstr(char const *s1, char const *s2, char **str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		(*str)[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		(*str)[i + j] = s2[j];
		j++;
	}
	(*str)[i + j] = '\0';
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 == NULL && s2 == NULL)
	{
		str = ft_strdup("");
		return (str);
	}
	else if (s1 == NULL || s2 == NULL)
	{
		str = (s1 == NULL && s2 != NULL) ? ft_strdup(s2) : ft_strdup(s1);
		return (str);
	}
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	ft_fillstr(s1, s2, &str);
	return (str);
}
