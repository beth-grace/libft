/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:32:09 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/06 16:51:26 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	int	index;

	index = 0;
	bstill = (unsigned char*)b; 
	while (bstill[index] <= len && bstill[index] != '\0')
	{
		bstill[index] = c;
		index++;
	}
	return bstill;
}
