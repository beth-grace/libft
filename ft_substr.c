/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:09:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/18 17:38:26 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		count;
	char		*sub;
	size_t		index;

	count = 0;
	index = start;
	while (count < len)
	{
		start++;
		count++;
	}
	sub = (char *)malloc((count + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	count = 0;
	start = index;
	while (count < len)
	{
		sub[count] = s[start];
		start++;
		count++;
	}
	if (count == len)
		sub[count] = '\0';
	return (sub);
}
