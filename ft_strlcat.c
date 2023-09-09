/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:31:58 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:31:58 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	dst_len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[dst_len] != '\0')
		dst_len++;
	if (dstsize <= i)
		dst_len += dstsize;
	else
		dst_len += i;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len);
}

/*int	main(void)
{
	char	dst[] = "Hello";
	char	src[] = "Good Morning";

	ft_strlcat(dst, src, '\0');
	printf("\n\t%s, %s\n", src, (dst));
	return (0);
}

esta funcion concatena dos cadenas. recibe como parametros un puntero a la
cadena de destino, un puntero a la cadena de origen y el tamaño del buffer
de destino.

declaramos las variables i, j y dst_len que inicializamos en 0.

luego creamos un ciclo while que mientras dst en la posicion i sea diferente
de 0, incrementamos i.

luego creamos un  otro ciclo while que mientras src en la
posicion dst_len sea diferente de 0, incrementamos dst_len. si dstsize es
menor o igual a i, dst_len sera igual a dstsize. si no, dst_len sera igual
a i.

luego creamos un ciclo while que mientras src en la posicion j sea
diferente de 0 y i + 1 sea menor que dstsize, dst en la posicion i sera
igual a src en la posicion j. incrementamos i y j. dst en la posicion i sera
igual a 0. devolvemos dst_len.

*/
