/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:21:42 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/22 19:48:11 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*new_mem;
	size_t			i;

	new_mem = (unsigned char*)malloc(size * count);
	if (new_mem == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		new_mem[i] = 0;
		i++;
	}
	return (new_mem);
}
