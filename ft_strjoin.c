/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:59:52 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 18:43:26 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	lg;

	lg = 0;
	while (str[lg])
		lg++;
	return (lg);
}

static unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lg;

	i = 0;
	lg = ft_strlen(src);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lg);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		lg;
	int		lgs1;
	int		i;

	i = 0;
	lg = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	lgs1 = ft_strlen((char *)s1);
	result = (char *)malloc((lg + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s1, lgs1 + 1);
	while (s2[i])
	{
		result[lgs1 + i] = s2[i];
		i++;
	}
	result[lg] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*s;

	s = ft_strjoin("123","");
	printf("ft = %s\n", s);
	free (s);
}*/
