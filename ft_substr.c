/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:19:35 by ykwon             #+#    #+#             */
/*   Updated: 2020/12/12 00:17:39 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	new_len;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	sub_s = (char*)malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	ft_strlcpy(sub_s, s + start, len + 1);
	return (sub_s);
}
