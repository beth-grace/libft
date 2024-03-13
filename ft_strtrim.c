/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:59:37 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/13 16:55:43 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	 loop(char *c,char *out)
{
	int	index;
	int	test;

	index = 0;
	test = 0;
	while (c[index] != '\0')
	{
		while (c[index] != out[test])
		   index++;
		test++;
		index = 0;
	}
	return (test);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		out;
	int		s;
	char	*dest;

	out = 0;
	s = 0;
	out  = loop(*set, *s1);
	dest = (char *)malloc((out + 1) * sizeof(char));
	index = 0;
	while (s1[index] != '\0')
	{
		{
			while (s1[index] != set[s])
				s++;
			index++;
			s = 0;
		}
		dest[out++] = s1[index++];
	}
	dest[out] = '\0';
	return (dest);
}
