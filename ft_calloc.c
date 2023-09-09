/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:50 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:40:24 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;
	unsigned int	i;

	i = 0;
	s1 = s;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
} */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr1;
	void	*ptr2;
	size_t	tam;

	tam = count * size;
	ptr1 = (char *)malloc(tam);
	if (ptr1 == 0)
	{
		return (0);
	}
	ptr2 = ptr1;
	ft_bzero (ptr2, tam);
	return (ptr1);
}

/*int	main(void)
{
	char *ptr;
	ptr = calloc(5, sizeof(char));
	printf("ptr: %s\n", ptr);
	return (0);
}

Esta funcion reserva un bloque de memoria, y lo pone a cero. recibe dos
parametros, 'count', que es el numero de elementos que queremos reservar,
y 'size', que es el tamaño de cada elemento.

creamos dos punteros void, ptr1 y ptr2, y una variable tam de tipo size_t,
que es un tipo de dato de 8 bytes, y la igualamos a count por size,
para saber el tamaño total de la zona de memoria que queremos reservar.

ptr1 es igual a malloc(tam), que es la funcion que reserva la memoria,
y le pasamos como parametro el tamaño total de la zona de memoria
que queremos reservar.

si ptr1 es igual a 0, es decir, si malloc no ha podido reservar
la memoria, devolvemos 0.
ptr2 es igual a ptr1, y cruzamos ptr2 a char, para que el compilador
no se queje. llamamos a la funcion ft_bzero, que pone a cero un bloque
de memoria, y le pasamos como parametros ptr2, que es el puntero a la
zona de memoria que queremos poner a cero,

y tam, que es el tamaño de la zona de memoria que queremos poner a cero.
devolvemos ptr1, que es el puntero a la zona de memoria que hemos reservado.
*/
