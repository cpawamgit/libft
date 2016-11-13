/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:40:40 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/12 17:40:42 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcmp(const char *s1, const char * s2)
{
	size_t i;

	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return(0);
	if (ft_strlen(s1) == 0)
		return(-1);
	if (ft_strlen(s2) == 0)
		return(1);
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if (((unsigned char) s1[i]) > ((unsigned char) s2[i]))
			return (1);
		if (((unsigned char) s1[i]) < ((unsigned char) s2[i]))
			return (-1);
		i++;
	}
	return (0);
}
