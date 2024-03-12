/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:52:25 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/12 12:18:51 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	index;
	unsigned char	*out;

	index = 0;
	out =  (unsigned char *)s;
	while (index < n)
	{
		if (out[index] = c)
			return (out + index)
		index++;
	}
	if (c == '\0' && out[index] = c)
		return (out + index);
	return (NULL);
}
