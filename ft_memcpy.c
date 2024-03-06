/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:57:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/06 12:17:50 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	index;
	int	end;

	index = 0;
	end = 0;
	while (src[index] != '\0' index <= n)
	{
		dst[end] = src[index];
		index++;
		end++;
	}
	return (dst);
}
