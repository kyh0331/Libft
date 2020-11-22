/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:05:01 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/22 22:30:58 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (str[i] && str[i] != c)
	{
		i++;
		count++;
	}
	while (str[i])
	{
		if (str[i] == c && str[i + 1]
				&& str[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	*str_n_cpy(char *str, int n)
{
	int		i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	result[n] = '\0';
	i = 0;
	while (i < n)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}

void	fill(char *str, char c, char **result)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 1;
	count = 0;
	if (str[i] && str[i] != c)
		j = i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (j < i)
				result[count++] = str_n_cpy(str + j, i - j);
			j = i + 1;
		}
		i++;
	}
	if (j < i)
		result[count] = str_n_cpy(str + j, i - j);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		length;
	int		count;

	if (c == '\0')
	{
		result = (char **)malloc(sizeof(char *) * 2);
		length = 0;
		while (s[length] != '\0')
			length++;
		result[0] = str_n_cpy((char*)s, length);
		result[1] = 0;
		return (result);
	}
	count = count_words((char*)s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	result[count] = 0;
	fill((char*)s, c, result);
	return (result);
}
