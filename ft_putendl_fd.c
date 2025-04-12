/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:05:30 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 19:44:04 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	int	fd = 2;

	ft_putendl_fd("hola que tal", fd);
	write (1, "\n", 1);
}*/
