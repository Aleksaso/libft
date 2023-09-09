/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:31:45 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:42:22 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}

/*int	main(void)
{
	const char str[] = "bonjour";
	unsigned char a = 'n';
	char	*res;

	res = ft_strchr(str, a);
	printf("%s\n", res);
}

la funcion strchr devuelve un puntero al primer caracter de la cadena que
coincide con el caracter que estamos buscando.

recibe como parametro un puntero a la cadena y el caracter que estamos buscando.
declaramos la variable i que inicializamos en 0.

luego creamos un ciclo while que mientras s en la posicion
i sea diferente de 0, si s en la posicion i es igual a c, devolvemos un puntero
a la posicion i de s.

luego incrementamos i. si c es igual a 0, devolvemos un
puntero a la posicion i de s. si no, devolvemos 0.

*/
