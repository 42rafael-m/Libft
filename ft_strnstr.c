/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:59:47 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 17:22:19 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	lg;

	j = 0;
	i = 0;
	lg = ft_strlen((char *)needle);
	if (lg == 0)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (j < lg && (i + j) < n && needle[j] == haystack[i + j])
		{
			j++;
			if (j == lg)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("s ft = %p\n", ft_strnstr("asdasdlad", "asd", 123));
	printf("s = %p\n", strstr("asdasdlad", "asd"));
}*/
