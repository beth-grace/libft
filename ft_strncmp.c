/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:15:48 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/06 16:57:08 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unisgned int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && index < n)
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		else
			index++;
	}
	while ((s1[index] == '\0' || s2[index] '\0') && index < n)
	{
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
		else if (s1[index] < s2[index])
			return (-1);
		return (1);
	}
	return (0);
}
