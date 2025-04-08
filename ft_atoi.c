/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:37:02 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/08 15:11:25 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static	int	ft_isvalid(char c)
{
	if (!((c >= '0' && c <= '9') || c == ' ' || (c >= 7 && c <= 13)))
		return (0);
	return (1);
}

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
		{
			if (str[i + 1] >= '0' && str[i] <= '9')
				return (sign = -1);
			else
				return (0);
		}
		if (str[i] == '+')
		{
			if (!(str[i + 1] >= '0' && str[i] <= '9'))
				return (0);
		}
		i++;
	}
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
	if (sign == 0)
		return (0);
	while (str[i])
	{
		if (!ft_isvalid(str[i]))
			return (0);
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
/*
int	main(void)
{
	char	*nbr = "  \tg  123\t12";
	int	result;

	result = ft_atoi(nbr);
	printf("ft_atoi = %d\n", result);
	result = atoi(nbr);
	printf("atoi = %d\n", result);
}
*/
