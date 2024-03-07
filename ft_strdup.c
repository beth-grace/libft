/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:17:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/07 12:27:42 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	index;
	int	size;
	char	*dest;

	size = 0;
	index = 0;
	while (src[index] != '\0')
		index++;
	dest = malloc((index + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index__;
	}
	dest[index] = '\0';
	return (dest);
}
