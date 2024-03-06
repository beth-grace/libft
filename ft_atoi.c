/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:29:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/06 14:27:52 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	index;
	int	n;

	index = 0;
	n = 0;
	// need to fix the reader og + and -
	if ((str[index] < 48 || str[index] > 57 ) && (str[index] != 43 || str[index] != 45))
		index++
	else if (str[index] = 42)
		n = n + 1;
	else if (str[index] = 45)
		n = n -1;
	index++;
	while (str[index] != '\0')
	{
		str[index] = str[index] - '0';
		str[index] = str[index] * 10;
		index++;
	}
	if (str[index] == '\0')
	{
		str / 10;
		str * n;
	}
	return (str);
}
