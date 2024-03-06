/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:40:23 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/06 14:31:40 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	*memset(void *b, int c)
{
	int	index;

	index = 0;
	while (c[index] != '\0')
	{
		if (c[index] >= 32 && c[index] <= 126)
		{
			c[index] = '\0';
			index++;
		}
	}
	return (c[index]);
}
