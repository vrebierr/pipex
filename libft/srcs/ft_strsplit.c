/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:18:01 by bgronon           #+#    #+#             */
/*   Updated: 2013/12/12 19:23:50 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_getnumber(char const *s, char c, int start, int end)
{
	int		cpt;

	cpt = 0;
	while (s[start] != '\0')
	{
		if (start == end && s[start] == c)
		{
			start++;
			end++;
		}
		else
		{
			if (s[end] == c || s[end] == '\0')
			{
				cpt++;
				start = end;
			}
			else
				end++;
		}
	}
	return (cpt);
}

static void	ft_fill(char const *s, char c, char **tab, int i)
{
	int		start;
	int		end;

	start = 0;
	end = 0;
	while (s[start] != '\0')
	{
		if (start == end && s[start] == c)
		{
			start++;
			end++;
		}
		else
		{
			if (s[end] == c || s[end] == '\0')
			{
				tab[i] = ft_strsub(s, start, (end - start));
				i++;
				start = end;
			}
			else
				end++;
		}
	}
}

char		**ft_strsplit(char const *s, char c)
{
	int		cpt;
	char	**tab;

	tab = NULL;
	if (!s)
		return (tab);
	cpt = 0;
	cpt = ft_getnumber(s, c, 0, 0);
	tab = NULL;
	tab = (char **)malloc(sizeof(char *) * (cpt + 1));
	if (tab)
	{
		tab[cpt] = NULL;
		ft_fill(s, c, tab, 0);
	}
	return (tab);
}
