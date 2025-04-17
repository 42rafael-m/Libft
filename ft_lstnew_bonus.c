/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:05:46 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/17 20:51:24 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonuslibft.h"
#include "libft.h"
#include <stdlib.h>
/*#include <stdio.h>

Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se
inicializa con el contenido del parámetro ’content’. La variable ’next’,
con NULL.

RETURN
El nuevo nodo.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	if (!content)
		return (NULL);
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	char	*content = NULL;
	t_list	*newnode;
	char	*s;

	printf("content = %p\n", content);
	newnode = ft_lstnew(content);
	s = newnode -> content;
	printf("*s = %s\n", s);
	printf("s = %p\n", s);
}*/
