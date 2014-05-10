/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streplace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <bgronon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 17:52:21 by bgronon           #+#    #+#             */
/*   Updated: 2014/02/27 18:34:59 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join_three(char *one, char *two, char *three)
{
	return (ft_strjoin(ft_strjoin(one, two), three));
}

void		ft_streplace(char **str, char *pattern, char *replace)
{
	int		i;
	size_t	len;
	char	*first;
	char	*end;

	i = 0;
	len = ft_strlen(pattern);
	first = NULL;
	end = NULL;
	while ((*str)[i] != '\0')
	{
		if (!ft_strncmp(pattern, *str + i, len))
		{
			if (i > 0)
				first = ft_strsub(*str, 0, i);
			end = ft_strsub(*str, i + len, ft_strlen(*str + i + len));
			*str = ft_join_three(first, replace, end);
			i += len;
		}
		else
			++i;
	}
}
