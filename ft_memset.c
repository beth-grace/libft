/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:32:09 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 14:49:10 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				index;
	unsigned char	*bstill;

	index = 0;
	bstill = (unsigned char *)b;
	while (bstill[index] <= len && bstill[index] != '\0')
	{
		bstill[index] = c;
		index++;
	}
	return (bstill);
}
