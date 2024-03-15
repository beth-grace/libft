/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:00:02 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/15 15:25:19 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && index < destsize)
	{
		dst[index] = src[index];
		index++;
	}
	while (index < destsize)
	{
		dst[index] = '\0';
		index++;
	}
	return (ft_strlen(src));
}
