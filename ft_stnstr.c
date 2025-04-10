#include <string.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	j;
	int	i;
	int	lg;

	j = 0;
	i = 0;
	lg = ft_strlen((char *)needle);
	if (lg == 0)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (j == lg)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("s ft = %p\n", ft_strnstr("asdasdlad", "sdl", 3));
	printf("s = %p\n", strstr("asdasdlad", "rtr"));
}
