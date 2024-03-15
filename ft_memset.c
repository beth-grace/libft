/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:32:09 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/15 12:47:46 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*bstill;

	index = 0;
	bstill = (unsigned char *)b;
	while (index <= len && bstill[index] != '\0')
	{
		bstill[index] = (unsigned char *)c;
		index++;
	}
	return (bstill);
}
