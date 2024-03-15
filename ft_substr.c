/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:09:15 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/15 16:33:28 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		count;
	int			index;
	char		*sub;

	index = start;
	count = 0;
	while (count < len)
	{
		start++;
		count++;
	}
	sub = (char *)malloc((count + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	start = index;
	count = 0;
	while (count < len)
	{
		sub[count] = s[start];
		start++;
		count++;
	}
	sub[count] = '\0';
	return (sub);
}
