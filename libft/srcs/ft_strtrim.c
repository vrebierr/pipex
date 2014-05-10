/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 23:25:24 by bgronon           #+#    #+#             */
/*   Updated: 2014/04/19 11:48:41 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getstart(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	return (i);
}

static int	ft_getend(char const *s)
{
	int		len;

	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
	{
		len--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		end;

	if (s == NULL)
	{
		return (NULL);
	}
	start = ft_getstart(s);
	end = ft_getend(s);
	str = ft_strsub(s, start, end - start + 1);
	if (!str)
	{
		return (NULL);
	}
	return (str);
}
