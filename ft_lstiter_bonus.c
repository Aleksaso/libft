/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:59 by asilva-o          #+#    #+#             */
/*   Updated: 2023/07/28 11:30:07 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*

lstiter: Itera sobre la lista ’lst’ y aplica la función ’f’  en el
contenido de cada 'nodo' elemento.
lst: La dirección del puntero al primer elemento de la lista.
f: La dirección de la función que hay que aplicar.
return: nada.
*/
