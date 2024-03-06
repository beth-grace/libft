/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:36:36 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/06 14:57:39 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strchr(const char *s, int c)
{
	int	index;
// i know that null has to count as a checkable character... need to ask..//
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] = c)
			return (s + index)
		index++;
	}
	return (s);
}
