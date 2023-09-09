/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:49 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:40 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char src[50] = "abcdefghijklmnopqrstuvwxyz";
	char dst[50] = "hola";

	ft_memcpy(dst, src, 6);
	printf("%s\n", dst);
}

esta funcion copia n bytes de la memoria de src a la memoria de dst. si dst
y src se superponen, el comportamiento no está definido.

las funciones memcpy y memmove devuelven un puntero a dst.

la funcion memcpy se usa para copiar n bytes de una cadena de caracteres
o byte especifica a otra cadena de caracteres

creamos un array de caracteres y lo imprimimos
antes de usar la funcion memcpy. despues de usar la funcion memcpy, imprimimos
el array de caracteres para ver el resultado.

*/
