/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:33:10 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 14:58:07 by rafael-m         ###   ########.fr       */
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

	lg = ft_strlen((char *)s);
	while (lg >= 0)
	{
		if ((char)c == s[lg])
			return ((char *)&s[lg]);
		lg--;
	}
	return (NULL);
}
/*
int	main(void)
{
	int	c = 'o';
//	char	s[] = {'h', 'o', 'l', 'a'};
	char	*s2 = "";

	printf("s ft = %p\n", ft_strrchr(s2, c));
	printf("s = %p\n", strrchr(s2, c));
}*/
