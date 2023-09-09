/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:21 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:30:21 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/*int	main()
{
	int	c;
	int	d;

	c = '9';
	d = 'a';
	printf("El carácter %c es un dígito? %d\n", c, ft_isdigit(c));
	printf("El carácter %c es un dígito? %d\n", d, ft_isdigit(d));
	return (0);
}
comprueba si el carácter es un dígito, es decir, si es un número.
devuelve 1, si no lo es devuelve 0.

 recibe como parámetro un int, que es el carácter que se va a comprobar.
 si el carácter está entre '0' y '9', devuelve 1, si no lo es devuelve 0.

*/
