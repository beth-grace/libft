/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:18:12 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 14:58:29 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*memmove(void *dst, const void *src, size_t len)
{
	int				index;
	unsigned char	*d;
	unsigned char	*s;

	index = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (src[index] != '\0' && index <= len)
	{
		d[index] = src[index];
		index++;
	}
	d[index] = '\0';
	return (d);
}
