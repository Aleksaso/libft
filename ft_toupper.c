/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:33:08 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:43:51 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int	main(void)
{
	unsigned char a = 90;
	printf("%c\n", ft_toupper(a));
}

la funcion toupper convierte el caracter c a mayuscula si es posible.

declaramos la variable c que inicializamos en 0. si c es mayor o
igual a 97 y c es menor o igual a 122, c es igual a c - 32.

se realiza la resta y utilizamos el operador de asignacion de la
tabla ascii. retornamos c.
*/
