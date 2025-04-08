/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:57:43 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/08 14:21:49 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			return (0);
		i++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s1 = "ilkwre";
	char	*s2 = "asd";
	int	result;

	result = ft_strncmp(s1, s2, 0);
	printf("result = %d\n", result);
	result = strncmp(s1, s2, result);
	printf("result = %d\n", result);
}
*/
