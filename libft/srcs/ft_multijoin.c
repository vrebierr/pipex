/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multijoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <bgronon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 18:56:12 by bgronon           #+#    #+#             */
/*   Updated: 2014/02/28 19:12:57 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

char	*ft_multijoin(int count, ...)
{
	va_list		ap;
	char		*res;

	res = NULL;
	va_start(ap, count);
	res = va_arg(ap, char *);
	while (count > 0)
	{
		res = ft_strjoin(res, va_arg(ap, char *));
		--count;
	}
	va_end(ap);
	return (res);
}
