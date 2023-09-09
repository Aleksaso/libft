/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:21:06 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:42:30 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	imprimir[] = "Weey Mundo Galáctico";
	printf("%s\n", imprimir);
	return (0);
}

 la funcion striteri primero creamos la declaracion de la funcion que recibe
un puntero a char y un puntero a funcion que recibe un unsigned int y un puntero
a char y no devuelve nada.

luego creamos la variable i que inicializamos en 0. luego creamos un ciclo while
que mientras s en la posicion i sea diferente de 0, llamamos a la funcion f
con los parametros i y la posicion i de s. luego incrementamos i y volvemos
a llamar a la funcion f con los parametros i y la posicion i de s hasta que
s en la posicion i sea igual a 0 y termina el ciclo.

*/
