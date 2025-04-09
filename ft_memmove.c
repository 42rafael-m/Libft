/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:28:07 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/09 20:02:52 by rafael-m         ###   ########.fr       */
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

static unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned  int	i;
	int	lg;

	i = 0;
	lg = ft_strlen(src);
	while (i < (size - 1) && src[i]&& src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lg);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const	unsigned	char	*s;
	char	temp[n];

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	ft_strlcpy(temp, (char *)s, (unsigned int)n + 1);
	ft_strlcpy((char *)d, temp, (unsigned int)n + 1);
	return (dest);
}

int	main(void)
{
	char    dest2[10];
	char    *src = "holaquetal";
	//size_t  n = 9;
	//char	dest[10];

	//ft_memmove(dest, src, n);
	memmove(src + 2, src, 4);
	//printf("dest = %s\n", dest);
	printf("dest2 = %s\n", dest2);
}
