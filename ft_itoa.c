/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:07:49 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/19 13:43:15 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <limits.h>
/*
Utilizando malloc(3), genera una string que represente el valor entero recibido
como argumento. Los números negativos tienen que gestionarse.

RETURN
La string que represente el número. NULL si falla la reserva de memoria.
*/

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

static int	ft_neg(long n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

static size_t	ft_intlen(int n)
{
	size_t	lg;

	lg = 1;
	if (ft_neg(n))
	{
		n = -n;
		lg++;
	}
	while (n > 9)
	{
		n = n / 10;
		lg++;
	}
	return (lg);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		i;
	int		neg;
	long	nbr;

	nbr = n;
	i = 0;
	neg = ft_neg(nbr);
	r = (char *)ft_calloc(ft_intlen(nbr) + 1, sizeof(char));
	if (!r)
		return (NULL);
	if (neg)
		nbr = -nbr;
	while (nbr > 9)
	{
		r[i++] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	r[i] = nbr + 48;
	if (neg)
		r[++i] = '-';
	r[++i] = '\0';
	ft_rev_char_tab(r);
	return (r);
}
/*
int	main(void)
{
	char	*r = ft_itoa(-2147483648LL);
	printf("ft = %s\n", r);
	printf("lg = %zu", ft_strlen(r));
	free (r);
}
*/
