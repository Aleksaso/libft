/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:28:15 by asilva-o          #+#    #+#             */
/*   Updated: 2023/07/28 10:08:07 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*
Toma como parámetro un nodo 'lst' y libera la memoria del contenido
utilizando la función 'del' dada como parámetro, además de liberar el nodo.
La memoria de 'next' no debe liberarse.
lstdelone: Suprime y libera la memoria del elemento pasado como parámetro
usando ’del’ y free(3). La memoria del campo ’next’ no debe liberarse.
lst: El elemento que hay que suprimir.
del: La dirección de la función que hay que aplicar al contenido de cada
elemento.
*/
