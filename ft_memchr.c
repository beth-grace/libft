/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:52:25 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/18 17:47:11 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*out;

	index = 0;
	out = (unsigned char *)s;
	if (!s || !c)
		return (NULL);
	while (index < n)
	{
		if (out[index] == c)
			return (out + index);
		index++;
	}
	return (NULL);
}
