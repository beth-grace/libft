/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:18:04 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 15:33:02 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		indexh;
	int		indexn;
	int		size;
	char	*ptr

	indexh = 0;
	indexn = 0;
	while (haystack[indexh] != '\0' && indexh <= len)
	{
		while (needle[indexn] != '\0')
			indexn++;
		size = indexn;
		indexn = 0;
		while (haystack[indexh] != needle[indexn])
			indexh++;
		if (needle[indexn] == 0)
			return (haystack);
		if (haystack[indxh] == needle[indexn])
		{	
			indexh++;
			indexn++;
			ptr = indexh;
		}
		while (haystack[indexh] == needle[indexn] && haystack[indexh - 1] == needle[indexn - 1])
		{
			indexh++;
			indexn++;
		}
		if (indexn != size)
			return (NULL);
		return (&ptr);
	}
