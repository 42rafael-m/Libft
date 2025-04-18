/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:08:17 by rafael-m          #+#    #+#             */
/*   Updated: 2025/04/18 18:51:01 by rafael-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada
 * nodo. Crea una lista resultante de la aplicación correcta y sucesiva de
 * la función ’f’ sobre cada nodo. La función ’del’ se utiliza para
 * eliminar el contenido de un nodo, si hace falta.

 RETURN
 La nueva lista. NULL si falla la reserva de memoria.
 */
/*
static void     *to_uppercase_i(void *s)
{
        unsigned char   *d;

        d = (unsigned char      *)s;
        while (*d)
        {
                if (*d >= 'a' && *d <= 'z')
                        *d = *d - 32;
                d++;
        }
	return (s);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	int		i;

//	new_node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		i++;
		new_node = ft_lstnew(lst -> content);
		if (new_node)
			f(new_node -> content);
		printf("new_node (%p) -> content = %s\n", new_node, (char *)new_node -> content);
		if (i == 1)
			new_lst = new_node;
		else
			ft_lstadd_back(&new_lst, new_node);
		lst = lst -> next;
	}
	return (new_lst);
}
/*
int     main(void)
{
	int     lg;
	t_list	*new_list;
	t_list	*node1 = ft_lstnew(strdup("Hola"));
	t_list	*node2 = ft_lstnew(strdup("que"));
	t_list	*node3 = ft_lstnew(strdup("tal"));
	t_list	*node4 = ft_lstnew(strdup("Adios"));


	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstadd_back(&node1, node4);
	new_list = ft_lstmap(node1, to_uppercase_i, free);
//	printf("node1 = %p\n", node1);
//	printf("node2 = %p\n", node2);
//	printf("node3 = %p\n", node3);
//	printf("node4 = %p\n", node4);
//	printf("next1 = %p\n", node1 -> next);
//	printf("next2 = %p\n", node2 -> next);
//	printf("next3 = %p\n", node3 -> next);
//	printf("next4 = %p\n", node4 -> next);
	lg = ft_lstsize(new_list);
	printf("lg new_list = %d\n", lg);
//	ft_lstiter(node1, to_uppercase_i);
//	printf("next1 = %s\n", (char *)node1 -> content);
//	printf("next2 = %s\n", (char *)node2 -> content);
//	printf("next3 = %s\n", (char *)node3 -> content);
//	printf("next4 = %s\n", (char *)node4 -> content);
}*/
