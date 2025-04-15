/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:40:15 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 18:09:16 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	size_t			lg;

	i = 0;
	lg = ft_strlen(src);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lg);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;

	size = ft_strlen(src);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, size + 1);
	return (dest);
}
/*
int	main(void)
{
	char	*str = "Hola\0quetal";
	char	*result;
	int	size;
	char	*result2;
	int	size2;

	result = ft_strdup(str);
	size = ft_strlen(result);
	result2 = strdup(str);
	size2 = strlen(result2);
	printf("result2 = %p\n", result2);
	printf("size2 = %d\n", size2);
	printf("result2 = %s\n", result2);
	printf("result = %p\n", result);
	printf("size = %d\n", size);
	printf("result = %s\n", result);
	free (result);
	return (0);
}
*/
