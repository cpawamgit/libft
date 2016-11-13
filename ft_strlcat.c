/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:05:22 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/13 23:05:25 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t len;
	size_t lensrc;

	i = 0;
	len = ft_strlen(s1);
	lensrc = ft_strlen(s2);
	while (s2[i] != '\0' && i < (size - len - 1))
	{
		s1[i + len] = s2[i];
		i++;
	}
	s1[i + len] = '\0';
	if (s2[size] != '\0')
		return (size);
	return (len + size);
}

