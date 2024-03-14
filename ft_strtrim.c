/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:59:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 12:16:00 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	 loop(char c,char *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
		if (s[index] == c)
			return (1);
		index++;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		out;
	int		start;
	int		end;
	char	*dest;

	while (loop(s1, set))
		start++;
	end = ft_strlen(s1);
	dest = (char *)malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	out = 0;
	while (loop(s1, set))
		end--;
	while (s1[start] != '\0')
	{
		dest[out] = s1[start];
		start++;
		out++;
	}
	dest[out] == '\0';
	return (dest);
}
