/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:29:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/07 13:56:30 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	index;
	int	n;
	int	ten;

	index = 0;
	n = 0;
	ten = 10;
	// need to fix the reader og + and -
	if ((str[index] < 33 )
		index++
	else if (str[index] = 42)
		n = n + 1;
	else if (str[index] = 45)
		n = n -1;
	index++;
	if (str[index] >= '0' && str[index] <= '9')
	{	
		str[index] = str[index] - 48;
		str[index] * ten;
		index++;
	}
	return ((str/ten)*n);
}
