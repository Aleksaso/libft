/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:23:11 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:58 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] != '\0')
	{
		write(fd, &s[cnt], 1);
		cnt++;
	}
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char *array;

	array = "Hola pepe";
	ft_putendl_fd(array, 1);
	return (0);
}

la funcion ft_putendl_fd escribe la cadena s en el file descriptor fd
seguido de un salto de linea. primero creamos la declaracion de la funcion
ft_putendl_fd que recibe un char y un int y no devuelve nada.

luego creamos un contador cnt que inicializamos en 0.
luego creamos un ciclo while que mientras s en la posicion cnt sea diferente
de 0, escribimos en el fd el char s en la posicion cnt y el 1 que es
el numero de bytes que queremos escribir.
luego incrementamos cnt.

*/
