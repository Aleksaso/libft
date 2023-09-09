/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:33:02 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 22:49:49 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*int	main(void)
{
	printf("%d\n", ft_tolower('f'));
	return (0);
}

tolower convierte el caracter c a minuscula si es posible.

declaramos la variable c que inicializamos en 0. si c es mayor o
igual a 65 y c es menor o igual a 90, c es igual a c + 32.

se realiza la suma y utilizamos el operador de asignacion
de la tabla ascii. retornamos c.

*/
