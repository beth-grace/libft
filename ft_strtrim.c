/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:59:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 00:26:27 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	 loop(char c,char *str)
{
	int	index;

	index = 0;
	while (str[index] == c)
		index++;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		out;
	int		start;
	int		end;
	int		s;
	char	*dest;

	start = loop(set, s1); 
	end = ft_strlen(s1);
	dest = (char *)malloc((end - start + 1) * sizeof(char));
	index = 0;
	while (s1[index] == set)
		index++;
	end--;
	while (s1[end] == set)
		end--;
	while (s1[index] != '\0')
	{
		dest[out] = s1[index];
		index++;
		out++;
	}
	dest[out] == '\0';
	return (dest);
}
