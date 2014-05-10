/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:43:39 by bgronon           #+#    #+#             */
/*   Updated: 2013/12/12 19:22:24 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	str = NULL;
	if (s && f)
	{
		i = 0;
		str = ft_strnew(ft_strlen(s));
		while (s[i] != '\0')
		{
			if (f != NULL)
				str[i] = f((char)(s[i]));
			else
				str[i] = s[i];
			i++;
		}
	}
	return (str);
}
