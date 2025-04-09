/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:50:11 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/09 21:55:03 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char	*str;
	char	*str2;

	i = 0;
	str = (char *)s1;
	str2 = (char *)s2;
	if (n > INT_MAX)
		return (0);
	while (i < (unsigned int)n)
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
	int	n = 34;
	printf("s ft = %d\n", ft_memcmp("hoslaaa", "hoslaa", n));
	printf("s = %d\n", memcmp("hoslaaa", "hoslaa", n));
}*/
