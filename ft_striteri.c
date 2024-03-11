/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:51:53 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/08 17:38:23 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s,void (*f)(unsigned int, char*))
{
	int	index;
	while (s[index] != '\0')
	{
		(*f)(index, &s[index]);
		index++;
	}
}
