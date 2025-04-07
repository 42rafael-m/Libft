/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:37:02 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/07 12:40:42 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
*/
static	int	ft_sign(char *str)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 1)
		sign = -1;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	j = 0;
	sign = ft_sign(str);
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
			if (str[i] <= '0' || str[i] >= '9')
				return (sign * result);
		}
		i++;
	}
	return (sign * result);
}
