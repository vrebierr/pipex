/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 12:01:59 by bgronon           #+#    #+#             */
/*   Updated: 2013/12/09 12:02:16 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_indexof(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		++i;
	}
	return (-1);
}
