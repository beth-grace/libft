/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:40:23 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 16:18:56 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				index;
	unsigned char	*ptr;

	index = 0;
	ptr = (unsigned char *)s;
	while (index < n)
	{
		if (ptr[index] >= 32 && ptr[index] <= 126)
		{
			ptr[index] = '\0';
			index++;
		}
	}
	return (ptr);
}
