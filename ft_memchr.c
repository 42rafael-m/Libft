/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:35:16 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/09 21:42:28 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	while (str[i] &&  i < (unsigned int)n)
	{
		if (str[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	if (*str == (char)c)
		return ((void *)s + i);
	return (NULL);
}

int	main(void)
{
	printf("s ft = %p\n", ft_memchr("asdhasjf", '1', -9));
	printf("s = %p\n", memchr("asdhasjf", '1', -9));
}
