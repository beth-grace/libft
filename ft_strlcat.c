/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:50:01 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/18 16:11:27 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	end;

	index = 0;
	end = 0;
	while (dest[index] && index < dstsize - 1)
		index++;
	while (src[end] && index < dstsize)
	{
		dest[index] =src[end];
		index++;
		end++;
	}
	if (dest[index] == '\0' || index == dstsize)
		index++;
	dest[index] = '\0';
	return (index);
}
