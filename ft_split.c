/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:05:01 by ykwon             #+#    #+#             */
/*   Updated: 2020/12/12 02:41:41 by ykwon            ###   ########.fr       */
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
	if (result == NULL)
		return (NULL);
	result[n] = '\0';
	i = 0;
	while (i < n)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}

char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**fill(char *str, char c, char **result)
{
	int i;
	int j;
	int count;

	i = -1;
	j = 0;
	count = 0;
	while (str[++i])
		if (str[i] == c)
		{
			if (j < i)
			{
				result[count] = str_n_cpy(str + j, i - j);
				if (result[count++] == NULL)
					return (ft_malloc_error(result));
			}
			j = i + 1;
		}
	if (j < i)
		result[count] = str_n_cpy(str + j, i - j);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;

	if (!s)
		return (NULL);
	count = count_words((char*)s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	result[count] = 0;
	return (fill((char*)s, c, result));
}
