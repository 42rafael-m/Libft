/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:24:15 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/08 19:29:56 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
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
	int	dest[100];
	int	src[3] = {123, 2, 3};
	size_t	n = 12;
	int	i = 0;
	int    dest2[100];

	ft_memcpy(dest, src, n);
	memcpy(dest2, src, n);
	while (i < 3)
	{
		printf("dest[%d] = %d\n", i, dest[i]);
		printf("dest2[%d] = %d\n", i, dest2[i]);
		i++;
	}
	//printf("dest2 = %s\n", dest2);
}
*/
