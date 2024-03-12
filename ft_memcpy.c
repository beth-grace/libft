/* ************************************************************************** */
ut
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:57:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/11 17:54:48 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				index;
	unsigned char	*s;
	unsigned char	*d;

	index = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (src[index] != '\0' index <= n)
	{
		dst[index] = src[index];
		index++;
	}
	return (dst);
}
