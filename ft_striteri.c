/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:56:05 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 14:50:05 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
static void	to_uppercase_i(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		index = 0;
		*c = *c - 32;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		f(0, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "asdsad";
	ft_striteri(s, to_uppercase_i);
	printf("ft_striteri = %s\n", s);
}
*/
