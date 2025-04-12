/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:24:15 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 16:25:23 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[100];
	char	src[12] = {98, 67, 112, 49, 200, 98, 98, 98, 98, 98, 89, 98};
	size_t	n = 12;
	int	i = 0;
	char	dest2[100];

	ft_memcpy(dest, src, n);
	memcpy(dest2, src, n);
	printf("dest = %s\n", dest);
	printf("dest2 = %s\n", dest2);
	while (i < (int)n)
	{
		printf("dest[%d] = %d\n", i, dest[i]);
		printf("dest2[%d] = %d\n", i, dest2[i]);
		i++;
	}
}
*/
