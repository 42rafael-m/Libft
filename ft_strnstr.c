/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:59:47 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 17:00:35 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	j;
	int	i;
	int	lg;

	j = 0;
	i = 0;
	lg = ft_strlen((char *)needle);
	if (lg == 0)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
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
	printf("s ft = %p\n", ft_strnstr("asdasdlad", "sdl", 3));
	printf("s = %p\n", strstr("asdasdlad", "rtr"));
}
*/
