/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:26:03 by asilva-o          #+#    #+#             */
/*   Updated: 2023/07/28 10:03:55 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nodes;

	nodes = 0;
	while (lst != 0)
	{
		nodes++;
		lst = lst->next;
	}
	return (nodes);
}

/*
Cuenta el número de nodos de una lista.
la funcion lstssize recorre la lista y cuenta los nodos de la lista
y devuelve el numero de nodos de la lista
*/
