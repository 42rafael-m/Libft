/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:08:17 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/18 22:00:18 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/* Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada
 * nodo. Crea una lista resultante de la aplicación correcta y sucesiva de
 * la función ’f’ sobre cada nodo. La función ’del’ se utiliza para
 * eliminar el contenido de un nodo, si hace falta.

 RETURN
 La nueva lista. NULL si falla la reserva de memoria.
 */
/*
static void     *ft_to_uppercase_i(void *s)
{
	char	*original = (char *)s;
	char	*copia = ft_strdup(original);
	if (!copia) return NULL;

	char *d = copia;
	while (*d)
	{
		if (*d >= 'a' && *d <= 'z')
			*d = *d - 32;
		d++;
	}
	return copia;
}
*/
static int	ft_errors_content(void *content, t_list **lst, void (*del)(void *))
{
	if (!content)
	{
		ft_lstclear(lst, del);
		return (1);
	}
	return (0);
}

static int	ft_errors_lst(void *content, t_list *node, t_list **lst,
		void (*del)(void *))
{
	if (!content)
	{
		ft_lstclear(lst, del);
		return (1);
	}
	if (!node)
	{
		del(content);
		ft_lstclear(lst, del);
		return (1);
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	void	*trans_content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (ft_errors_content(lst -> content, &new_lst, del))
			return (NULL);
		trans_content = f(lst -> content);
		new_node = ft_lstnew(trans_content);
		if (ft_errors_lst(trans_content, new_node, &new_lst, del))
			return (NULL);
		ft_lstadd_back(&new_lst, new_node);
		lst = lst -> next;
	}
	return (new_lst);
}
/*
int     main(void)
{
	int	lg;
	t_list	*new_list;
	char *s1 = strdup("Hola");
        t_list  *node1;
	node1 = ft_lstnew(s1);
        char *s2 = strdup("que");
        t_list  *node2;
	node2 = ft_lstnew(s2);
        char *s3 = strdup("tal");
	t_list	*node3;
	node3 = ft_lstnew(s3);
        char *s4 = strdup("Adios");
        t_list  *node4;
	node4 = ft_lstnew(s4);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstadd_back(&node1, node4);
	printf("node1 = %p\n", node1);
	printf("node2 = %p\n", node2);
	printf("node3 = %p\n", node3);
	printf("node4 = %p\n", node4);
	printf("next1 = %p\n", node1 -> next);
	printf("next2 = %p\n", node2 -> next);
	printf("next3 = %p\n", node3 -> next);
	printf("next4 = %p\n", node4 -> next);
	lg = ft_lstsize(node1);
	printf("lg = %d\n", lg);
	new_list = ft_lstmap(node1, ft_to_uppercase_i, free);
	if (!new_list)
	{
		ft_lstclear(&node1, free);
		return (1);
	}
	lg = ft_lstsize(new_list);
	printf("lg new_list = %d\n", lg);
	ft_lstclear(&node1, free);
	ft_lstclear(&new_list, free);
}*/
