/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:54:56 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/22 20:05:30 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*new_s1;

	len = ft_strlen(s1);
	new_s1 = (char*)malloc(sizeof(char) * (len + 1));
	if (new_s1 == NULL)
		return (NULL);
	ft_strlcpy(new_s1, s1, len + 1);
	return (new_s1);
}
