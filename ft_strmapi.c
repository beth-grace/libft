#include "libft.h"

char	*ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
	int	index1;
	char	*fin;

	index1 = 0;
	while (s[index] != '\0')
		index++;
	if (index < 1)
		return (NULL);
	fin = malloc((index + 1) * sizeof (char))
	index = 0;
	while (s[index] != '\0')
	{
		fin[index] = (*f)(index, &s[index]);
		index++;
	}
	index = '\0';
	return (fin);
}
