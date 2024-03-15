/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:59:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 17:48:03 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	loop(char const c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		out;
	int		start;
	int		end;
	char	*dest;

	start = 0;
	while (loop(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (loop(s1[end], set))
		end--;
	dest = (char *)malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	out = 0;
	while (s1[start] != '\0')
	{
		dest[out] = s1[start];
		start++;
		out++;
	}
	dest[out] = '\0';
	return (dest);
}
