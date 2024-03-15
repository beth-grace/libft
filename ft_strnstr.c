/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:18:04 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 17:42:06 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t				indexh;
	size_t				indexn;
	int					size;

	indexh = 0;
	indexn = 0;
	size = ft_strlen(needle);
	if (!size)
		return ((char *)haystack);
	while (haystack[indexh] != '\0' && indexh <= len)
	{
		while (haystack[indexh] != needle[indexn])
			indexh++;
		while (haystack[indexh] == needle[indexn]
			&& haystack[indexh - 1] == needle[indexn - 1])
		{
			indexh++;
			indexn++;
		}
	}
	return ((char *)haystack + indexh);
}
