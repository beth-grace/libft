/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:18:04 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/18 16:01:39 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t				indexh;
	size_t				indexn;
	size_t				size;

	indexh = 0;
	indexn = 0;
	size = ft_strlen(needle);
	if (!needle || !haystack)
		return (NULL);
	if (needle[indexn] == '\0')
		return ((char *)haystack);
	while (haystack[indexh] != '\0' && needle[indexn] != '\0' && indexh < len)
	{
		indexn = 0;
		while (haystack[indexh] != needle[indexn])
			indexh++;
		if (haystack[indexh] == needle[indexn])
			{
				while (haystack[indexh] == needle[indexn])
				{
					indexh++;
					indexn++;
				}
				if (indexn == size - 1)
				return ((char *)haystack + indexh);
			}
	}
	return (NULL);
}
