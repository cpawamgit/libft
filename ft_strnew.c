/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:57:55 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/07 18:58:14 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;
	str = (char *)malloc(sizeof(char) * size);
	if (str)
	{
		ft_bzero(str, size);
		return (str);
	}
	else
		return (NULL);
}
