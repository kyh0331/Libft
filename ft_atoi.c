/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykwon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:30:32 by ykwon             #+#    #+#             */
/*   Updated: 2020/11/22 16:51:27 by ykwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_c(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else if (c == '+')
		return (-1);
	else if (c == '-')
		return (-2);
	else if (c >= '0' && c <= '9')
		return (2);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int i;
	int count;
	int result;

	i = 0;
	result = 0;
	while (check_c(str[i]) == 1)
		i++;
	count = 0;
	if (check_c(str[i]) == -2)
	{
		count++;
		i++;
	}
	else if (check_c(str[i]) == -1)
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (check_c(str[i]) == 2)
		result = result * 10 + str[i++] - '0';
	if (count % 2 == 1)
		result = -1 * result;
	return (result);
}
