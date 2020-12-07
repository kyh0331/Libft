/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:19:35 by ykwon             #+#    #+#             */
/*   Updated: 2020/12/08 00:33:06 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub_s;

	sub_s = (char*)malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	if (start < (unsigned int)ft_strlen(s))
		ft_strlcpy(sub_s, s + start, len + 1);
	else
		return (ft_strdup(""));
	return (sub_s);
}
