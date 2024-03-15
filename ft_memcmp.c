/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:19:43 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 17:38:55 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	index = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (ptr1[index] != '\0' && ptr2[index] != '\0' && index < n)
	{
		if (ptr1[index] > ptr2[index])
			return (1);
		if (ptr1[index] < ptr2[index])
			return (-1);
		else
			index++;
	}
	while ((ptr1[index] == '\0' || ptr2[index] == '\0') && index < n)
	{
		if (ptr1[index] == '\0' && ptr2[index] == '\0')
			return (0);
		if (ptr1[index] < ptr2[index])
			return (-1);
		return (1);
	}
	return (0);
}
