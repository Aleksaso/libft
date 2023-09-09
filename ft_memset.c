/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:31:25 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:49 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*s;
	size_t	i;

	s = str;
	i = 0;
	while (i < len)
	{
		*((char *)s + i) = c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	a[50] = "la funcion recibe como parametro un puntero.";
	int	c = '2';
	size_t	len = 10;
	memset(a, c, len);
	printf("%s\n", a);
}

con la funcion memset podemos llenar un bloque de memoria con un valor
especifico.

la funcion recibe como parametro un puntero al bloque de memoria
que queremos llenar, con valor que queremos y el numero de bytes...

llamamos a la funcion y le pasamos como parametro el puntero a la variable a
que es un array de 50 caracteres, el valor que queremos llenar que es 2 y el
numero de bytes que queremos llenar que es 1.

creamos una variable char s y una variable i de tipo size_t.
luego creamos un ciclo while que mientras i sea menor que len, s
en la posicion i sera igual a c. luego devolvemos str.

y la igualamos a str que es el puntero a la variable a. luego imprimimos
la variable a que es un array de 50 caracteres.
*/
