/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:22:59 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/08 16:24:32 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
{
	int	index;
	int	size;
	char	*str;

	if (n < 1)
		size++;
	while(n < 10)
		size++;
	str = malloc(size + 1) * sizeof(char);


}
