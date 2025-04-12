/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:50:11 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 17:10:17 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	const unsigned char	*str2;

	i = 0;
	str = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str[i] != str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	size_t	n = -12345;
	printf("n = %zu\n", n);
//	int	s[] = {'h', 'o', 'l', 'a'};
	char	*str = "holaas";
//	int     s2[] = {'h', 'o', 'l', 'a'};
	char    *str2 = "holaas";

	printf("s ft = %d\n", ft_memcmp(str2, str, n));
	printf("s = %d\n", memcmp(str2, str, n));
}*/
