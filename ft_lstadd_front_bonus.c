/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:25:18 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:00 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
Añade el nodo NEW al principio de la lista 'lst'
lstadd_front: Añade el elemento ’new’ al principio de la lista.
lst: La dirección del puntero al primer elemento de la lista.
new: La dirección del puntero al elemento que hay que añadir a la lista.
return: nada.
*/
