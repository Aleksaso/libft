/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:27 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:30:27 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint(75));
	return (0);
}

comprueba si el carácter es imprimible, es decir, si es un carácter que se
puede imprimir.

devuelve 1 si es un carácter imprimible, si no lo es devuelve 0.

recibe como parámetro un int, que es el carácter que se va a comprobar. si el
carácter está entre 32 y 126, devuelve 1, si no lo es devuelve 0.

*/
