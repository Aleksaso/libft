/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:30:41 by asilva-o          #+#    #+#             */
/*   Updated: 2023/07/28 11:33:33 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resl;
	t_list	*first;

	if (!lst)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	resl = first;
	resl->content = f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		resl->next = malloc(sizeof(t_list));
		if (!resl->next)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		resl->next->content = f(lst->content);
		resl = resl->next;
	}
	resl->next = NULL;
	return (first);
}

/*funcion lstmap Itera la lista 'lst' y aplica la función 'f' al contenido
de cada nodo. crea una lista resultante de la aplicación correcta y sucesiva
de la función 'f' sobre cada nodo. la función 'del' se utiliza
para eliminar el contenido de un nodo, si hace falta.

recorre la lista y aplica la funcion f a cada elemento
de la lista y crea una nueva lista con los resultados de las aplicaciones
de la funcion f a cada elemento de la lista, la funcion f es una
funcion que recibe como parametro un puntero a void y devuelve un
puntero a void, la funcion f puede ser cualquier funcion que reciba
un puntero a void y devuelva un puntero a void.
*/
