/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 00:38:02 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/12 00:38:04 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;
	size_t i;
	size_t overlap;

	i = 0;
	d = dst;
	s = NULL;
	ft_strcpy(s, src);
	overlap = 0;
	while (i < len)
	{
		if (&src[i] == dst)
			overlap = 1;
		i++;
	}
	i = 0;
	if (overlap == 0)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	else
		d[len] = '\0';
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
}
