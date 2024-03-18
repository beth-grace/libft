/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:24:03 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/18 16:08:15 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	count(const char *s, char c)
{
	int	index;
	int	size;

	index = 0;
	size = 1;
	if (!*s)
		return (0);
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			while (s[index] == c)
				index++;
			size++;
		}
		else
			index++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**dest;
	int		size;
	int		string;

	index = 0;
	size = 0;
	string = 0;
	dest = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!s || !dest)
		return (0);
	while (s[index])
	{
		while (*s == c && *s)
			s++;
		if (s[index] != c)
		{
			size = 0;
			while (s[index] != '\0' && s[index] != c)
			{
				index++;
				size++;
			}
			dest[string++] = ft_substr(s, index - size, size);
		}
		else
			index++;
		}
	dest[index] = NULL;
	return (dest);
}
