/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:40 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:47:21 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
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
}

/*int	main()
{
	char s1[] = "Exit_Borrar Success.";
	ft_bzero(s1 + 4, 1);
	printf("Eliminar todo despues de exit: %s\n", s1);
	return (0);
}

esta funcion es similiar a la funcion memset, pero en vez de rellenar
con un valor, rellena con ceros. pone a cero un bloque de memoria,
recibe un puntero a la zona de memoria que queremos poner a cero y el
tamaño de la zona de memoria que queremos poner a cero.


creamos un puntero a unsigned char, que es un puntero a un tipo de dato
de 1 byte, y lo llamamos s1, y lo igualamos a s, que es el puntero que
recibe la funcion, y lo casteamos a unsigned char, para que el compilador
no se queje.

creamos una variable i de tipo unsigned int, que es un tipo
de dato de 4 bytes, y la igualamos a 0.

creamos un bucle while, que mientras i sea menor que n, que es el
tamaño de la zona de memoria que queremos poner a cero,
s1 en la posicion i, que es el puntero que
recibe la funcion, es igual a 0, y sumamos 1 a i.

*/
