/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:09:36 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 16:57:32 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * (-1);
	}
	nbr = n;
	if (nbr > 9)
	{
		printf("n = %d", n);
		ft_putnbr_fd(n / 10, fd);
	}
	nbr = (n % 10) + 48;
	write (fd, &nbr, sizeof(n));
}
/*
int	main(void)
{
	int	fd = 2;

	ft_putnbr_fd(0, fd);
	write (1, "\n", 1);
}
*/
