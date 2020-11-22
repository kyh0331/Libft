/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:33:47 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/22 20:39:44 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*new_str;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char*)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, len + 1);
	ft_strlcat(new_str, s2, len + 1);
	return (new_str);
}
