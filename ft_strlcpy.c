/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:32:05 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:42:45 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char b[] = "Si, Pepito grillo!";
	char c[16];

	printf("%zu", ft_strlcpy(c, b, 10));
	printf("%s\n", b);
}

se crea la funcion ft_strlcpy que recibe como parametros un puntero a la cadena
de destino, un puntero a la cadena de origen y el tamaño del buffer de destino.

declaramos la variable i que inicializamos en 0. si dstsize es diferente de 0,
creamos un ciclo while que mientras src en la posicion i sea diferente de 0 y
i sea menor que dstsize - 1, dst en la posicion i sera igual a src en la
posicion i y luego incrementamos i. luego dst en la posicion i sera igual a 0.

luego creamos un ciclo while que mientras src en la posicion i sea diferente de
0, incrementamos i. luego retornamos la funcion ft_my_strlen con src como
parametro.

*/
