/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:38:47 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 18:12:07 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int	c = 74;
	size_t	n = 10;
	char	*s;
	char	*s2;

	s = (char *)malloc(n * sizeof(int));
	s2 = (char *)malloc(n * sizeof(int));
	ft_memset(s, c, n);
	printf("s = %s\n", s);
	memset(s2, c, n);
	printf("s2 = %s\n", s2);
	free (s);
	free (s2);
}
*/
