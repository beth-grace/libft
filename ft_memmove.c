/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:18:12 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 17:39:32 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*d;
	unsigned char	*s;

	index = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (s[index] != '\0' && index <= len)
	{
		d[index] = s[index];
		index++;
	}
	d[index] = '\0';
	return (d);
}
