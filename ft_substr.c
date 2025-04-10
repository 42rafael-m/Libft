/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:15:12 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/10 15:28:29 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int	i;

	i = 0;
	result = malloc(len);
	if (!result)
		return(NULL);
	while (i < (int)len)
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("result = %s\n", ft_substr("123456789", 3, 4));
}
