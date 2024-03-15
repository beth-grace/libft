/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:50:01 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/15 14:38:00 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	end;

	index = 0;
	end = 0;
	while (src[index] != '\0')
		index++;
	while (dest[end] != '\0' && end < dstsize)
	{
		index++;
		end++;
	}
	if (src[end] == '\0' || end == dstsize)
		index++;
	return (index);
}
