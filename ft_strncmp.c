/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:15:48 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/18 17:44:40 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[index] && s2[index] && index < n)
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		else
			index++;
	}
	while ((s1[index] == '\0' || s2[index] == '\0') && index < n)
	{
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
		else if (s1[index] == '\0')
			return (-1);
		return (1);
	}
	return (0);
}
