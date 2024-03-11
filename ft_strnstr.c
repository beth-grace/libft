#include "libft"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	indexh;
	int	indexn;
	int	size;
	char	*ptr

	indexh = 0;
	indexn = 0;
	while (haystack[indexh] != '\0' && haystack[indexh] <= len)
	{
		while (needle[indexn] != '\0')
			indexn++;
		size = indexn;
		indexn = 0;
		while (haystack[indexh] != needle[indexn])
			indexh++;
		if (needle[indexn] == 0)
			return (haystack);
		if (haystack[indxh] == needle[indexn])
		{	
			indexh++;
			indexn++;
			ptr = indexh;
		}
		while (haystack[indexh] == needle[indexn] && haystack[indexh - 1] == needle[indexn - 1])
		{
			indexh++;
			indexn++;
		}
		if (indexn != size)
			return (NULL);
		return (&ptr);
	}
