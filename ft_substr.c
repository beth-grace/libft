/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:09:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 15:42:59 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		index;
	int		size;
	char	*sub;

	index = 0;
	while (s[index] != '\0' && s[index] <= len)
	{
		while (s[index] != start)
			index++;
		while (s[index] <= len)
		{
			index++;
			size++;
		}
		sub = (char *)malloc((size + 1) * sizeof(char));
		index = index - size;
		while (s[index] <= len)
		{
			sub[index] = s[index];
			index++;
		}
		sub[index] = '\0';
		return (sub);
	}
	return (NULL);
}
