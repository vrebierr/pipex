/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:33:20 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/27 11:27:37 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != 0 && s[len] != (char)c)
	{
		len--;
	}
	if (s[len] == (char)c)
	{
		return (&(((char *)s)[len]));
	}
	return (NULL);
}
