/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:29:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 17:43:04 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t	index;
	int		n;
	int		out;

	index = 0;
	n = 0;
	while (isspace(str[index]))
		index++;
	if (str[index] == 42)
		n = n + 1;
	if (str[index] == 45)
		n = n -1;
	index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		out *= 10;
		out = str[index] - 48;
		index++;
	}
	return (out * n);
}
