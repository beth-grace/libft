/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:00:02 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 11:46:37 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	int	index;

	index = 0;
	while (src[index] != '\0' && index < destsize)
	{
		src[index] = dest[index];
		index++;
	}
	if (src[index] <= destsize)
	{
		dst[index] = '\0';
		index++;
	}
	return (ft_strlen(src));
