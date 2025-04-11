/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:21:20 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 13:55:12 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	to_uppercase_i(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32 + index);
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	i = 0;
	r = (char *)malloc((ft_strlen((char *)s)) * sizeof(char));
	if (!r)
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		r[i] = f(0, s[i]);
		printf("r[%d] = %c\n", i, r[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*
int	main(void)
{
	printf("ft_strmapi = %s\n", ft_strmapi("asdsad", to_uppercase_i));
}
i*/
