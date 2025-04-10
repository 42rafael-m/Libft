#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
	return (s);
}


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
	{
		result = malloc(0);
		return (result);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}

int	main(void)
{
	size_t	size = 4;
	size_t	nmemb = 0;
	size_t	i = 0;
	char	*r1 = (char *)ft_calloc(nmemb, size);
	char    *r2 = (char *)calloc(nmemb, size);

	while (i < (nmemb * size))
	{
		r1[i] = 65;
		r2[i] = 65;
		i++;
	}
	printf("r1 = %p\n", r1);
	printf("r2 = %p\n", r2);
	printf("len r1 = %ld\n", strlen(r2));
	printf("len r2 = %ld\n", strlen(r2));
	printf("r1 = %s\n", r1);
	printf("r2 = %s\n", r2);
	free (r1);
	free (r2);
}
