/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:28:07 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 20:04:42 by rafael-m         ###   ########.fr       */
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

static unsigned	int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		lg;

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

static unsigned int	ft_strrlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		lg;

	i = 0;
	lg = ft_strlen(src);
	while (i < (size - 1))
		i++;
	dest[i] = '\0';
	while (i > 0)
	{
		i--;
		dest[i] = src[i];
	}
	return (lg);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_strlcpy((char *)d, (char *)s, (unsigned int)n + 1);
	else
		ft_strrlcpy((char *)d, (char *)s, (unsigned int)n + 1);
	return (dest);
}
/*
int	main(void)
{
	char    src[4] = {'a', '\0', 'w'};
	size_t  n = 4;
	char	dest[n];
	char    dest2[n];
	int	i = 0;

	ft_memmove(dest, src, n);
	memmove(dest2, src, n);
	while (i < 4)
	{
		printf("dest = %c\n", dest[i]);
		printf("dest2 = %c\n", dest2[i]);
		i++;
	}
}*/
