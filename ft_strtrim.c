/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:24:28 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 18:53:59 by rafael-m         ###   ########.fr       */
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

static char	*ft_modstrncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (s1);
}

static char	*ft_modstrrncmp(char *s1, char *s2, unsigned int n)
{
	while (*s2)
		s2++;
	s2--;
	while (*s1)
		s1++;
	s1--;
	while (n > 0 && (*s1 == *s2))
	{
		s1--;
		s2--;
		n--;
	}
	return (++s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		lg1;
	int		lg2;
	int		i;

	i = 0;
	lg1 = ft_strlen((char *)set);
	lg2 = ft_modstrrncmp((char *)s1, (char *)set, lg1)
		- ft_modstrncmp((char *)s1, (char *)set, lg1);
	result = (char *)malloc((lg2 + 1) * sizeof(char));
	if (!(result))
		return (NULL);
	lg1 = ft_modstrncmp((char *)s1, (char *)set, lg1) - &s1[0];
	lg2 = lg1 + lg2;
	while (lg1 < lg2)
	{
		result[i] = s1[lg1];
		lg1++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*s;

	s = ft_strtrim("12abcdef12", "2");
	printf("ft = %s\n", s);
	free (s);
}*/
