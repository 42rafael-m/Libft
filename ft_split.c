/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:34:44 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/12 19:04:47 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

static size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	lg;

	i = -1;
	lg = ft_strlen((char *)s);
	if (start >= lg)
	{
		result = malloc(1 * sizeof(char));
		if (!(result))
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > lg - start)
		len = lg - start;
	result = malloc((len + 1) * sizeof(char));
	if (!(result))
		return (NULL);
	while (++i < len)
		result[i] = s[start + i];
	result[i] = '\0';
	return (result);
}

static char	*ft_sep_lines(char *str, int depth, char charset)
{
	int	count;
	int	i;
	int	start;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == charset)
			i++;
		if (!str[i])
			break ;
		if (count == depth)
		{
			start = i;
			while (str[i] && str[i] != charset)
				i++;
			return (ft_substr(str, start, i - start));
		}
		while (str[i] && str[i] != charset)
			i++;
		count++;
	}
	return (NULL);
}

static int	ft_depth(char *str, char charset)
{
	int	depth;
	int	word;
	int	i;
	int	lg;

	i = 0;
	lg = ft_strlen(str);
	depth = 0;
	word = 0;
	while (i < lg)
	{
		if (str[i] != charset && !word)
		{
			word = 1;
			depth++;
		}
		if (str[i] == charset)
			word = 0;
		i++;
	}
	return (depth);
}

char	**ft_split(char *str, char charset)
{
	char	**result;
	int		depth;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	depth = ft_depth(str, charset);
	result = (char **)malloc((depth + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < depth)
	{
		result[i] = ft_sep_lines(str, i, charset);
		if (!result[i])
		{
			while (i-- > 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[depth] = NULL;
	return (result);
}
/*
int main(void)
{
	int	i = 0;
	char	**result = ft_split("   lorem   ipsum Suspendisse   ", ' ');

	if (!result)
		return (1);
	while (result[i])
	{
		printf("result[%d] = %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
//	printf("depth = %d\n", depth);
	free (result[i]);
	free(result);
	return (0);
}*/
