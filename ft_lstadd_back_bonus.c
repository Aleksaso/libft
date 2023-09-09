/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:27:37 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:40:56 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*(lst));
	ptr->next = new;
}

/*
 Añade el 'nodo' elemento ’new’ al final de la lista 'lst'.
 lst: La dirección del puntero al primer elemento de la lista.
 new: La dirección del puntero al elemento que hay que añadir a la lista.
 return: nada.
*/
