/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:24:28 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/10 16:32:53 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	lgset;
	int	lg;

	lg = 0;
	lgset = ft_strlen(set);
	if (!(strncmp(s1, set, lg)))
		lg = lgset;
	if (!(strncmp(s1 - 3)))
}
