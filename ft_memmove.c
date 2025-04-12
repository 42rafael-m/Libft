/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:28:07 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 17:02:16 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	ft_strlen(char *str)
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

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

static unsigned int	ft_strrlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	lg;

	lg = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (lg);
	if (size > lg + 1)
		size = lg + 1;
	i = size - 1;
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
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		ft_strlcpy(d, (char *)s, n + 1);
	else
		ft_strrlcpy(d, (char *)s, n + 1);
	return (dest);
}

int	main(void)
{
	char    src[4] = {94, 87, 'w'};
	size_t  n = 4;
	char	dest[n];
	char    dest2[n];
	int	i = 0;

	ft_memmove(src, src + 2, n);
	memmove(src, src + 2, n);
	while (i < 4)
	{
		printf("dest = %c\n", dest[i]);
		printf("dest2 = %c\n", dest2[i]);
		i++;
	}
}
