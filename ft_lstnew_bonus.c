/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:24:28 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:22 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (ptr == NULL)
		return (0);
	ptr->content = (void *)content;
	ptr->next = NULL;
	return (ptr);
}

/*int	main(void)
{
	char	*str = "Hola";
	t_list	*ptr = ft_lstnew_bonus(str);
	printf("%s\n", (char *)ptr->content);
	return (0);
}

Crea un nuevo nodo utilizando malloc(3). La variable mienbro CONTENT se
inicializa con el contenido del páramentro CONTENT La variable next con NULL.

la funcion ft_lstnew crea un nuevo nodo de la lista y le asigna el contenido
que le pasemos como parametro, en este caso le pasamos un string "Hola" y lo
asignamos a la variable str, luego creamos un puntero a la estructura t_list
llamado ptr y le asignamos el resultado de la funcion ft_lstnew(str) que es
un puntero a la estructura t_list, luego imprimimos el contenido de
ptr->content que es el contenido del nodo de la lista y nos imprime "Hola"
que es el contenido que le pasamos a la funcion ft_lstnew como parametro.
*/
