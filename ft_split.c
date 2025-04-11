/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:34:44 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/11 13:19:52 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

static char	*ft_strcopy_from(char *str, char *result, char charset, int depth)
{
	int	count;
	int	i;
	int	k;

	count = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == charset)
		{
			count++;
			i++;
		}
		if (count == depth)
		{
			result[k] = str[i];
			k++;
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

static char	*ft_sep_lines(char *str, int depth, char *result, char charset)
{
	int	count;
	int	i;
	int	lg;

	count = 0;
	i = 0;
	lg = 0;
	while (str[i])
	{
		if (str[i] == charset)
			count++;
		if (count == depth)
			lg++;
		i++;
	}
	result = (char *)malloc((lg + 1) * sizeof(char));
	if (!result)
	{
		free (result);
		return (NULL);
	}
	result = ft_strcopy_from(str, result, charset, depth);
	return (result);
}

static int	ft_depth(char *str, char charset)
{
	int	depth;
	int	i;

	i = 0;
	depth = 1;
	while (str[i])
	{
		if (str[i] == charset)
			depth++;
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
	depth = ft_depth(str, charset);
	result = (char **)malloc((depth + 1) * sizeof(char *));
	if (!result)
	{
		free (result);
		return (NULL);
	}
	while (i < depth)
	{
		result[i] = ft_sep_lines(str, i, result[i], charset);
		i++;
	}
	result[depth] = NULL;
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char	**result;
	int	i = 0;

	if (argc != 3)
	{
		write(2, "Error!", 7);
		return (1);
	}
	result = ft_split(argv[1], argv[2][0]);
	while (result[i])
	{
		printf("result[%d] = %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);i++;
	}
	free(result);
	return (0);
}
*/
