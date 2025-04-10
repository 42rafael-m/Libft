#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	type	*result;

/*	if (nmemb * size > PTRDIFF_MAX)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	result = (char *)malloc(nmemb * size);
	return (result);*/
	ressult = (type *)malloc(nmemb, size);
	return (result);
}

int	main(void)
{
	size_t	size = 4;
	size_t	nmemb = 7;
	size_t	i = 0;
	char	*r1 = ft_calloc(nmemb, size);
	char    *r2 = calloc(nmemb, size);

	while (i < (nmemb * size))
	{
		r1[i] = 65;
		r2[i] = 65;
		i++;
	}	
	printf("r1 = %ld\n", strlen(r1));
	printf("r2 = %ld\n", strlen(r2));
	printf("PTRDIFF_MAX = %ld\n", PTRDIFF_MAX);
	free (r1);
	free (r2);
}
