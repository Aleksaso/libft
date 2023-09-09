/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:28:59 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:51:45 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;

	if (lst && del)
	{
		while (*lst)
		{
			start = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = start;
		}
	}
}

/*
Elimana y libera el nodo 'lst' dado y todos los consecutivos de ese nodo,
utilizando la función 'del' y free (3). Al final, el puntero a la
lista debe ser NULL.

lstclear: Suprime y libera la memoria del elemento pasado como parámetro y de
todos los elementos siguientes, con ’del’ y free(3). Por último, el puntero
inicial debe pasar a NULL.
lst: La dirección del puntero al primer elemento de la lista.
del: La dirección de la función que hay que aplicar al contenido de cada
elemento.
*/
