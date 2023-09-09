/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:14 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:30:14 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isascii(121));
	return (0);
}

comprueba si el carácter es un carácter de la tabla ASCII,

que usando una escala decimal de 0 a 127. devuelve 1 si es un
carácter de la tabla ASCII, y 0 si no lo es. recibe como
parámetro un int, que es el carácter que se va a comprobar.

si el carácter está entre 0 y 127, devuelve 1, si no, devuelve 0.

*/
