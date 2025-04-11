/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:07:49 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 12:32:11 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	lg;

	lg = 0;
	while (str[lg] != '\0')
	{
		++lg;
	}
	return (lg);
}

static void	ft_rev_char_tab(char *tab)
{
	int	t;
	int	end;
	int	start;

	end = ft_strlen(tab) - 1;
	start = 0;
	while (start < end)
	{
		t = tab[start];
		tab[start] = tab[end];
		tab[end] = t;
		++start;
		--end;
	}
}

static int	ft_neg(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		i;
	int		neg;

	neg = ft_neg(n);
	i = 0;
	r = (char *)malloc(12);
	if (!r)
		return (NULL);
	if (neg)
		n = n * (-1);
	while (n > 9)
	{
		r[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	r[i] = n + 48;
	if (neg)
		r[++i] = '-';
	r[++i] = '\0';
	ft_rev_char_tab(r);
	return (r);
}
/*
int	main(void)
{
	printf("ft = %s\n", ft_itoa(-123));
}
*/
