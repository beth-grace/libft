/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:18:30 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/14 17:30:04 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*fin;

	index = 0;
	while (s[index] != '\0')
		index++;
	if (index < 1)
		return (NULL);
	fin = (char *)malloc((index + 1) * sizeof(char));
	index = 0;
	while (s[index] != '\0')
	{
		fin[index] = (*f)(index, s[index]);
		index++;
	}
	fin[index] = '\0';
	return (fin);
}
