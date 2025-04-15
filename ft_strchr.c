/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:16:39 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/15 15:38:07 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)c == *s)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == *s)
		return ((char *)s);
	return (NULL);
}

int	main(void)
{
//	char	c = 'e';
	char s[] = "tripouille";

	printf("s ft = %p\n", ft_strchr(s, 't' + 256));
	printf("*s = %p\n", strchr(s, 't' + 256));
}
