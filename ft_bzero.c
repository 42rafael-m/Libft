/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:38:06 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 18:57:30 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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
/*
int	main(void)
{
	size_t	n = 4;
	char	*s;
	char	*s2;

	s = (char *)malloc(2 * sizeof(int));
	s2 = (char *)malloc(2 * sizeof(int));
	ft_bzero(s, n);
	printf("s = %s\n", s);
	bzero(s2, n);
	printf("s2 = %s\n", s2);
	free (s);
	free (s2);
}
*/
