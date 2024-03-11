/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:40:23 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/11 17:53:06 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	int				index;
	unsigned char	*ptr;

	index = 0;
	ptr = (unsigned char *)b;
	while (index < len)
	{
		if (ptr[index] >= 32 && ptr[index] <= 126)
		{
			ptr[index] = (unsigned char)c;
			index++;
		}
	}
	return (ptr);
}
