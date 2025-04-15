/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:16:39 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/15 16:46:24 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

static char	*ft_empty(char const *s1, char const *s2)
{
	char	*result;

	if (!s1)
	{
		result = (char *)malloc(1);
		return (result);
	}
	if (!s2)
		return ((char *)s1);
	return (NULL);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	lg;

	i = 0;
	lg = ft_strlen((char *)s);
	if (start >= len)
		return (ft_empty("", ""));
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;
	char			*result;

	end = ft_strlen(s1);
	start = 0;
	if (!s1 || !set)
		return (ft_empty(s1, set));
	while (s1[start])
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	while (end > 0)
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	result = ft_substr(s1, start, end - start + 1);
	return (result);
}
/*
int     main(void)
{
	char    *s = "lorem ipsum dolor sit amet";
	char    *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	char    *s2 = " lorem ipsum dolor sit amet";
	char    *s3 = "       ";
	char    *set = " ";
	char    *set1 = "te";
	char    *set2 = " l";
	char    *set3 = "tel";
	char    *r = NULL;

	r = ft_strtrim(s1, set);
	printf("ft1 = %s\n", r);
	free (r);
	r = ft_strtrim(s, set1);
	printf("ft2 = %s\n", r);
	free (r);
	r = ft_strtrim(s2, set2);
	printf("ft3 = %s\n", r);
	free (r);
	r = ft_strtrim(s, set3);
	printf("ft4 = %s\n", r);
	free (r);
	r = ft_strtrim(s3, set);
	printf("ft5 = %s\n", r);
	free (r);
	r = ft_strtrim("", "");
        printf("ft6 = %s\n", r);
        free (r);
	r = ft_strtrim(s, "");
        printf("ft7 = %s\n", r);
        free (r);
//	r = ft_strtrim("xxxz  test with x and z and x .  zx  xx z", "z x");
//	printf("ft8 = %s\n", r);
//        free (r);
}*/
