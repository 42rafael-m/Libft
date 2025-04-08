/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:53:27 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/08 13:56:32 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	lg;
	int	lg2;

	i = 0;
	j = 0;
	lg = ft_strlen(dest);
	printf("lg = %d\n", lg);
	printf("size = %d\n", size);
	lg2 = ft_strlen(src);
	if (size <= lg)
		return (lg + lg2);
	while (dest[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lg + lg2);
}
/*
int	main(void)
{
	char	dest[20] = "hola";
	char    dest2[20] = "hola";
	char    dest3[20] = "hola";
	char    dest4[20] = "hola";
	char    dest5[20] = "hola";
	char	*src = "adiós";
	int	result;

	result = ft_strlcat(dest, src, -1);
	printf("result = %d\n", result);
	result = ft_strlcat(dest2, src, 0);
	printf("result = %d\n", result);
	result = ft_strlcat(dest3, src, 2);
	printf("result = %d\n", result);
	result = ft_strlcat(dest4, src, 6);
	printf("result = %d\n", result);
	result = ft_strlcat(dest5, src, 10);
	printf("result = %d\n", result);
}
*/
