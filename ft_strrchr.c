/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:32:29 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:43:10 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (0);
}

/*int	main(void)
{
	const char	str[] ="Hello Man ";
	unsigned	char a = 'o';
	char	*res;

	res = ft_strrchr(str, a);
	printf("%s\n", res);

}

la funcion strrchr devuelve un puntero a la ultima ocurrencia del
caracter c en la cadena s.

declaramos la variable i que inicializamos en 0.

luego creamos un ciclo while que mientras s en la posicion i sea diferente
de 0, incrementamos i.

luego creamos un  otrociclo while que mientras i sea mayor
o igual a 0, si s en la posicion i es igual a c, devolvemos un puntero a s
en la posicion i. decrementamos i. devolvemos 0.

*/
