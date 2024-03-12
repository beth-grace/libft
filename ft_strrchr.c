/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:57:59 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 12:13:22 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	index;
	int	n;

	index = 0;
	n = 0;
	while (s[index] != '\0')
	{
		if (s[index] = c)
			n = index;
		index++;
	}
	return (s + n);
}
