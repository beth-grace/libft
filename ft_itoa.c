/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:22:59 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/11 17:32:11 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char	*ft_itoa(int n)
{
	int		index;
	int		c;
	char	*dest;

	if (n == 0)
		return (ft_strdup("0"));
	if ( n == INT_MIN)
		return (ft_strdup("-2147483648"));
	index = 0;
	if (n < 0)
	{	
		index++;
		n = -n;
	}
	c = n;
	while (c > 0)
	{
		c /= 10;
		index++;
	}
	dest = (char *)malloc((index + 1) * sizeof(char));
	dest[index--] = '\0';
	while (n != 0)
	{
		dest[index] = (n % 10) + '0';
		index--;
		n /= 10;
	}
	if (index == 0)
		dest[index] = '-'; 
	return (dest);
}

int main()
{
	ft_putstr_fd(ft_itoa(INT_MAX), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(-1234), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(0), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(INT_MIN), 1);
	ft_putchar_fd('\n', 1);
}
