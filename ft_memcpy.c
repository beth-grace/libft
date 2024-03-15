/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:57:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/15 12:44:41 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*s;
	unsigned char	*d;

	index = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (s[index] != '\0' && index <= n)
	{
		d[index] = s[index];
		index++;
	}
	return (d);
}
