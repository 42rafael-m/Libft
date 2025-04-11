/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:28:13 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 17:48:35 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c > 13 && c <= 127)
		return (16384);
	return (0);
}
/*
int	main(void)
{
	char	c = 1;

	printf("ft = %d\n", ft_isprint(c));
	printf("s = %d\n", isprint(c));
}*/
