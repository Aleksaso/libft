/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:33 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:27 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const	char	*str = "3 1 4 2 4 5 6 ";
	char	*res;

	res = ft_memchr(str, '2', 9);
	printf("%s\n", res);
}

 buscar el caracter c en la cadena s hasta n bytes
  si encuentra el caracter devuelve un puntero a la primera ocurrencia
  si no encuentra el caracter devuelve NULL
  si n es 0 devuelve NULL

  declaramos un puntero a unsigned char para poder recorrer la cadena
  declaramos un entero i para recorrer la cadena

  si n es 0 devolvemos NULL porque no hay nada que buscar
  llamamos while mientras i sea menor que n recorremos la cadena
  si el caracter en la posicion i es igual al caracter c devolvemos un
  puntero a esa posicion de la cadena s y salimos de la funcion
  si no encontramos el caracter devolvemos NULL

*/
