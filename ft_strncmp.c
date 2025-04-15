/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:57:43 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/09 21:50:07 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char )*s1 - (unsigned char )*s2);
}
/*
int	main(void)
{
	char	*s1 = "asde";
	char	*s2 = "asd";
	int	result;
	int	n = 10;

	result = ft_strncmp(s1, s2, n);
	printf("result = %d\n", result);
	result = strncmp(s1, s2, n);
	printf("result = %d\n", result);
}
*/
