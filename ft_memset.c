/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:05:24 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/20 17:09:25 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*new_b;

	a = (unsigned char)c;
	new_b = b;
	i = 0;
	while (i < len)
	{
		new_b[i] = a;
		i++;
	}
	return (new_b);
}
