/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:50:01 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 14:24:03 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	index;
	unsigned int	end;

	index = 0;
	end = 0;
	while (dest[index] != '\0')
		index++;
	while (src[end] != '\0' && end < dstsize)
	{
		dest[index] = src[end];
		index++;
		end++;
	}
	if (src[end] == '\0' || end == dstsize)
		dest[index] = '\0';
	return (dest);
}