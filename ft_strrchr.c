/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:33:10 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/10 16:47:12 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	lg;
	int	i;

	i = 0;
	lg = ft_strlen((char *)s);
	while (*s)
		s++;
	while (lg > 0)
	{
		printf("*s = %c, ", *s);
		if (c == *s)
			return ((char *)s);
		lg--;
		s--;
	}
	return (NULL);
}

int	main(void)
{
	printf("s ft = %c\n", *ft_strrchr("Holacsaa", 't'));
	printf("s = %c\n", *strrchr("Holacsaa", 't'));
}
