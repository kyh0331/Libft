/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 03:22:59 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/21 05:43:22 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size;
	size_t i;
	
	size = ft_strlen(dst);
	i = 0;
	if (size > dstsize - 1)
		;
	else 
	{
		while (size + i < dstsize - 1)
		{
			dst[size + i] = src[i];
			i++;
		}
		dst[size + i] = '\0';
	}
	return (size + i);
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
