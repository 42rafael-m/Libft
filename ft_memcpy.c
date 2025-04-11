/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:24:15 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 19:18:46 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static	unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lg;

	i = 0;
	lg = ft_strlen(src);
	while (i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lg);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	ft_strlcpy(d, (char *)s, n);
	return (dest);
}
/*
int	main(void)
{
	char	dest[100];
	char	src[12] = "a1sd\tfg\0as";
	size_t	n = 12;
	int	i = 0;
	char	dest2[100];

	ft_memcpy(dest, src, n);
	memcpy(dest2, src, n);
	printf("dest = %p\n", dest);
	printf("dest2 = %p\n", dest2);
	while (i < (int)n)
	{
		printf("dest[%d] = %d\n", i, dest[i]);
		printf("dest2[%d] = %d\n", i, dest2[i]);
		i++;
	}
}
*/
