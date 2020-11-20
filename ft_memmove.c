/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:42:46 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/21 00:25:41 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char	*new_src;
	unsigned char	temp[len];

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (i < len)
	{
		temp[i] = new_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		new_dst[i] = temp[i];
		i++;
	}
	return (dst);
}
