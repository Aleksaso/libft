/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:23:44 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:42:04 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	aux;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 2147483647)
		write(fd, "2147483647", 10);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			write(fd, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			aux = n + 48;
			write(fd, &aux, 1);
		}
	}
}

/*int	main(void)
{
	int	n;

	n = 2147483647;
	ft_putnbr_fd(n, 1);
	return (0);
}

la funcion ft_putnbr_fd escribe el entero n en el file descriptor fd.

primero creamos la declaracion de la funcion ft_putnbr_fd que recibe
un int y un int y no devuelve nada. luego creamos una variable auxiliar
de tipo int. luego creamos un condicional que si n es igual a -2147483648
escribimos en el fd el string "-2147483648"

 y el 11 que es el numero de bytes que queremos escribir.
 luego creamos un condicional que si n es igual a 2147483647
escribimos en el fd el string "2147483647"
y el 10 que es el numero de bytes que queremos escribir.

luego creamos un condicional que si n es menor que 0
multiplicamos n por -1 y escribimos en el fd el char '-' y el 1 que es el
numero de bytes que queremos escribir.

luego creamos un condicional que si n es mayor
que 9 llamamos a la funcion ft_putnbr_fd con n / 10 y fd como parametros y
luego llamamos a la funcion ft_putnbr_fd con n % 10 y fd como parametros.

luego creamos un condicional que si n es menor que 9 creamos la variable aux
y le asignamos el valor de n + 48 y luego escribimos en el fd el char aux
y el 1 que es el numero de bytes que queremos escribir.

*/
